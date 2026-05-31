//
// Created by 32832 on 2026/5/31.
//
// C++ 把引用作为返回值

#include<iostream>
using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
double& setValues(int i)
{
    double& ref = vals[i];
    return ref;
}

int main()
{
    cout << "Before using setValues: " << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << vals[i] << endl;
    }

    setValues(1) = 20.5;
    setValues(4) = 25.5;

    cout << "After using setValues: " << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << vals[i] << endl;
    }

    return 0;
}
