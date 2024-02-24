// SAOD_5_main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Test.h"
#include "Child.h"
#include "Aggregate.h"
#include "AggregateT.h"

void foo(Test t);

Test GLOBAL_TEST;

int main()
{


    cout << "^^^ GLOBAL CREATION ^^^\n\n";
    // - - - - - - - - - - - - - - - - - 
    {
    cout << "Before" << endl;

    Test a; 
    }

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nDynamic obj\n" << endl;
    cout << "Before" << endl;

    Test* a = new Test();
    delete a;

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nArray\n" << endl;
    cout << "Before" << endl;

    a = new Test[3];
    delete [] a;

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nfoo\n" << endl;
    cout << "Before" << endl;

    a = new Test;
    foo(*a);
    cout << "vvv Deleting original" << endl;
    delete a;

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nInheritance\n" << endl;
    cout << "Before" << endl;

    Child* c = new Child();
    delete c;

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nAggregation\n" << endl;
    cout << "Before" << endl;

    Aggregate* ag = new Aggregate();
    delete ag;

    cout << "After" << endl;


    // - - - - - - - - - - - - - - - - - 
    cout << "\nAggregation<T>\n" << endl;
    cout << "Before" << endl;

    AggregateT<Test>* agt = new AggregateT<Test>();
    delete agt;

    cout << "After" << endl;


    cout << "\n\nvvv GLOBAL DELETE vvv\n";
}


void foo(Test t) {
    cout << "Foo is running" << endl;
}