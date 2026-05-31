//
// Created by 32832 on 2026/5/29.
//
// 从函数返回指针

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int * getRandom()
{
    static int r[10]; // 如果不加 “static” 的话数组 r 在函数结束之后就失效了，后面指针 p 访问的就是一个无效的地址

    // 生成 10 个随机数
    for (int i = 0; i < 10 ; i++) {
        r[i] = rand() % 100 + 1;
    }

    return r;
}

int main()
{
    // 设置种子
    srand(static_cast<unsigned int>(time(NULL)));

    int * p = getRandom();

    for (int i = 0 ; i < 10 ; i++) {
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    return 0;
}