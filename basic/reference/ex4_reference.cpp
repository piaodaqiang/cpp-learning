//
// Created by 32832 on 2026/5/31.
//
// 返回对静态变量的引用

#include<iostream>
using namespace std;

int& getStaticRef()
{
    static int num = 5;
    return num;
}

int main()
{
    int& ref = getStaticRef();

    cout << "初始值：" << ref << endl;

    ref = 10; // 修改静态变量的值

    cout << "修改后的值： " << ref << endl;

    return 0;
}