//
// Created by 32832 on 2026/5/24.
//
#include<iostream>
using namespace std;

int main()
{
    // 定义一个数组
    int arr[] = {10,20,30,40,50};

    // 定义一个指向数组第二个元素的指针
    int * ptr = &arr[1];

    // 输出指针指向的元素
    cout << "指针当前指向的元素是：" << *ptr << endl;

    // 递增指针
    ptr++;
    // 输出递增后指针指向的元素
    cout << "递增后指针指向的元素是：" << *ptr << endl;

    // 递减指针
    ptr--;
    cout << "递减后指针指向的元素是：" << *ptr << endl;
    return 0;
}