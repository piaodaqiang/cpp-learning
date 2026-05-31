//
// Created by 32832 on 2026/5/29.
//
#include<iostream>
using namespace std;

double getAverage(int *arr, int size);

int main()
{
    int arr[] = {1000, 2, 3, 17, 50};
    double average = getAverage(arr, 5); // 传进去的是数组 arr 首元素的地址 (&arr[0])
    cout << "The average is : " << average << endl;
    return 0;
}

double getAverage(int *arr , int size) // 在函数参数中 int* arr 和 int arr[] 几乎是等价的
{
    int sum = 0;
    double avg;
    for (int i = 0 ; i < size ; i ++) {
        sum += arr[i]; // arr[i] 等价于 *(arr + i)
    }
    avg = static_cast<double>(sum) / size; // double(sum) 是 C++ 的函数式转换风格 (double)sum 是 C 的转换风格

    return avg;
}
