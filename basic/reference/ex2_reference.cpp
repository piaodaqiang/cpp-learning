//
// Created by 32832 on 2026/5/31.
//
// C++ 把引用作为参数

#include<iostream>
using namespace std;

void swap(int& x,int& y);

int main()
{
    int a = 100;
    int b = 200;

    cout << "Before swap: "<< endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    swap(a,b);

    cout << "After swap: "<< endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}

void swap(int& x, int& y)
{
    //想让函数修改外面的变量，就不能只传普通值；
    //可以传指针，也可以传引用。
    //C++ 里引用写起来更自然，所以这里用 int& x, int& y

    int temp;
    temp = x;
    x = y;
    y = temp;
}
