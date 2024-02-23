
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c(2, 3), d =(3, 2); // d = (2+0i) Почему так!?!??!?? *Студент полон негодования*
    cout << c << " " << d << endl;
    cout << c*d/d << " " << c/d*d << endl;
    cout << c-c << " " << d+c-c << endl;
    cout << c.Conjugate() << " " << d.Conjugate() << endl;

    {
        Complex v[4];
        for (Complex* p = v; p - v < 4; cout << *p++);
        cout << endl;
    }
    Complex v[4]{ 1,2, Complex(2,3) };
    for (Complex* p = v; p - v < 4; cout << *p++);
    cout << endl;

    Complex* pc = new Complex(5, -1);
    cout << *pc << " " << pc->Re << " " << pc->Im << endl;
    delete pc;

    pc = new Complex;
    cout << *pc << " " << pc->Re << " " << pc->Im << endl;
    delete pc;
    
    pc = new Complex(-1);
    cout << *pc << " " << pc->Re << " " << pc->Im << endl;
    delete pc;

    pc = new Complex[3]{ Complex(30, 10), 2};
    cout << *pc << " " << pc[1].Re << " " << pc[0].Im << endl;
    delete [] pc;

}
