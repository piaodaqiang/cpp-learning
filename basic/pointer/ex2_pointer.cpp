//
// Created by 32832 on 2026/5/24.
//
#include<iostream>

using namespace std;

int main()
{
    int var = 20; // 实际变量的声明
    int *ip; // 指针变量的声明

    ip = &var; // ip 指针指向实际变量 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl; // 对指针进行解引用从而得到指针中地址的值

    return 0;
}