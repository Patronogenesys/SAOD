#include <iostream>
#include "utils.h"

using namespace std;

void Swap(int& a, int& b);

int main()
{
    //int x = 3;
    //int* p = &x;
    //cout << x << ' ' << *p << ' ' << p << endl;

    //cout << ++p << endl;
    //cout << p - &x << endl;


    //typedef unsigned char byte; 	    // Нет встроенного byte
    //byte* pb = (byte*)--p;		        // вернули указатель на x и преобразовали
    //for (byte* pt = pb; pt - pb < sizeof(int); pt++)
    //    cout << (int)*pt << ' ';	    // выводим как int
    //cout << endl;

    int a = 3, b = 5;
    cout << "a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    int A[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++)
        cout << A[i] << ' ';
    cout << endl;

    rotate(A, 5, true);

    for (int* p = A; p - A < 5; p++)
        cout << *p << ' ';
    cout << endl;


    //int a[5]{ 1,2,3,4,5 };
    //for (int i = 0; i < 5; i++)
    //{
    //    cout << a[i] << " ";
    //}
    //cout << endl;
}



