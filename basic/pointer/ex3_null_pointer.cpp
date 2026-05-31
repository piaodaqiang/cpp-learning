//
// Created by 32832 on 2026/5/24.
//
#include<iostream>
using namespace std;

int main()
{
    int * ptr = NULL;

    if (!ptr) {
        cout << "*ptr 的值是： " << ptr << endl;
    }
    // 可以使用 if(!ptr) 来检查一个空指针

    return 0;
}