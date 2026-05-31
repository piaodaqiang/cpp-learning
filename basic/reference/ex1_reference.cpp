//
// Created by 32832 on 2026/5/31.
//
#include<iostream>
using namespace std;

int main()
{
    int i;
    double d;

    int& r = i;
    double& s = d;

    i = 5;
    cout << "The Value of i : " << i << endl;
    cout << "The reference of i:  " << r << endl;

    d = 11.7;
    cout << "The Value of d : " << d << endl;
    cout << "The reference of d:  " << s << endl;

    return 0;
}