//#include "stdafx.h"

void Swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

void rotate(int a[], int n, bool clockwise = false) {
    if (!clockwise) {
        int x = a[0];
        for (int* p = a + 1; p - a < n; p++)
            *(p - 1) = *p;
        a[n - 1] = x;
    }
    else {
        int x = a[n - 1];
        for (int* p = a + n - 2; p - a >= 0; p--)
            *(p + 1) = *p;
        a[0] = x;
    }
}