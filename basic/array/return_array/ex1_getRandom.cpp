#include<iostream>
#include<cstdlib>// 函数 srand() 和 rand() 出自这里
#include<ctime>

using namespace std;

// 定义一个获取随机数的函数
int * getRandom() // C++ 不能直接把普通数组作为函数返回值返回，所以这里用 int* 返回数组第一个元素的地址。
{
    // 设置数组
    static int r[10]; // 使用 static 原因：使 r[10] 数组不会随着函数结束而销毁，它会一直存在直到程序结束

    for (int i = 0 ; i < 10 ; i ++) {
        r[i] = rand() % (10 - 2 + 1) + 2; // 规定生成的随机数范围是 2~10 (注意 rand() 函数的写法)
        // 注意 rand() 函数不能有参数！
    }

    return r; // 返回数组首元素地址，也就是 &r[0]
}

int main()
{
    // 设置随机数种子
    srand(static_cast<unsigned int>(time(nullptr))); // static_cast<目标类型>(要转换的值)
    // nullptr 表示 “空指针”
    // 使用 srand() 函数防止每次 rand() 函数生成的随机数都是一样的

    int * p; // 定义一个 int 指针，用来保存随机数数组首元素的地址
    p = getRandom();

    for (int i = 0 ; i < 10 ; i ++) {
        cout << "*(p + " << i << "): ";
        cout << *(p + i) << endl; // 也可以写成 p[i]
    }

    return 0;
}