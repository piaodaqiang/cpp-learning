//
// Created by 32832 on 2026/5/24.
//
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[13] = "huangqingtan";
    char str2[13] = "helloworld";
    char str3[13];

    int len;

    // 复制 str1 到 str3
    strcpy(str3 , str1);
    cout << "strcpy(str3 , str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat(str1 , str2);
    cout << "strcat(str1 , str2) : " << str1 << endl;

    // 连接后 str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

    return 0;
}
