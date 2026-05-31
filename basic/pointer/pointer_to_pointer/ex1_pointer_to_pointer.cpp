//
// Created by 32832 on 2026/5/29.
//
#include <iostream>
using namespace std;

int main()
{
    int var = 300;
    int *ptr = &var;
    int **pptr = &ptr;

    cout << "The value of var is : " << var << endl;
    cout << "The value of *ptr is : " << *ptr << endl;
    cout << "The value of **pptr is :" << **pptr << endl;

    return 0;
}