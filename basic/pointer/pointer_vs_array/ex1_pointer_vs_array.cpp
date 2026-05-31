//
// Created by 32832 on 2026/5/27.
//
#include<iostream>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {10,20,30};
    int* ptr = var;

    for (int i = 0 ; i < MAX ; i++) {
        cout << "var[" << i << "] 的内存地址为：" ;
        cout << ptr << endl;

        cout << "var[" << i << "] 的值为：";
        cout << *ptr << endl;

        ptr++; // 移动到下一个位置
    }
    return 0;
}