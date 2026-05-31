//
// Created by 32832 on 2026/5/24.
//
#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int * ptr1 = &a;
    int * ptr2 = &a;
    int * ptr3 = &b;

    // 比较指针是否相等
    if (ptr1 == ptr2) {
        cout << "ptr1 和 ptr2 指向相同的位置" << endl;
    }else {
        cout << "ptr1 和 ptr2 指向不同的位置" << endl;
    }

    if (ptr1 != ptr3) {
        cout << "ptr1 和 ptr3 不同的位置" << endl;
    } else {
        cout << "ptr1 和 ptr3 指向相同的位置" << endl;
    }

    // 关系比较
    int arr[] = {10,20,30,40,50};
    int* ptr4 = &arr[1]; // 指针指向数组第二个元素
    int* ptr5 = &arr[3]; // 指针指向数组第四个元素

    // 比较指针的相对位置
    if (ptr4 < ptr5) {
        cout << "ptr4 指向的元素在 ptr5 指向的元素之前" << endl;
    } else {
        cout << "ptr5 指向的元素在 ptr4 指向的元素之前" << endl;
    }

    return 0;
}