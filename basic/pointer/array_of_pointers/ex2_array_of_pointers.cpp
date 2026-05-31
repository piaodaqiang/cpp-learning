//
// Created by 32832 on 2026/5/27.
//
#include<iostream>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {10,100,200};
    int *ptr[MAX]; // 定义一个指针数组，ptr 中的每个指针都指向一个 int 类型的变量

    for (int i = 0 ; i < MAX ; i++) {
        ptr[i] = &var[i]; // 将 var数组元素的地址赋值给 ptr 指针数组的每个元素
    }

    for (int i = 0 ; i < MAX ; i++) {
        cout << "The Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
    return 0;
}
