//
// Created by 32832 on 2026/5/27.
//
#include<iostream>
using namespace std;

const int MAX = 4;

int main()
{
    const char* name[MAX] = {
        "huang",
        "qing",
        "tan",
        "helloworld"
    }; // 都是指向字符的指针

    for (int i = 0 ; i < MAX ; i++) {
        cout << "The value of var[" << i << "] = ";
        cout << name[i] << endl; // 输出整个字符串，例如 huang
        cout << *name[i] << endl; // 输出第一个字符，例如 h
    }

    // 打印地址
    for (int i = 0 ; i < MAX ; i++) {
        cout << "The address of var[" << i << "] =";
        cout << static_cast<const void*>(name[i]) << endl;
    }
    return 0;
}