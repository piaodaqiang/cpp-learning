//
// Created by 32832 on 2026/5/23.
//
#include<iostream>
using namespace std;

int * createArray(int size)
{
    // 在堆区动态申请 size 个 int 的连续空间，并用 arr 保存首元素地址
    int * arr = new int [size];

    for (int i = 0 ; i < size ; i++) {
        arr [i] = i + 1;
    }

    return arr; // 返回动态数组首元素地址
}

int main()
{
    int size = 10;
    int * arr = createArray(size);

    for (int i = 0 ; i < size ; i++) {
        cout << "arr[" << i << "] : " << arr[i] << endl;
    }

    delete[] arr; // 释放 new[] 申请的动态数组内存

    return 0;
}