//
// Created by 32832 on 2026/5/29.
//
#include<iostream>
#include<ctime>
using namespace std;

void getSeconds(unsigned long* par);

int main()
{
    unsigned long par;

    getSeconds(&par); // 将变量的指针传递给函数

    cout << "The value of seconds is : " << par << endl;

    return 0;
}


void getSeconds(unsigned long* par)
{
    *par = time(NULL); // 解引用为值
}