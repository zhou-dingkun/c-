// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include <cstdlib>

using namespace std;
int main()
{
    int a = rand() % 20; // 随机产生一个0 -- 21之间内的一个整数容
    int b,c;
    cout << "我这个人是真闲\n";
    Sleep(1000);
    cout << "我太无聊了\n";
    Sleep(1000);
    cout << "所以我又写代码了\n";
    Sleep(1000);
    cout << "你们知道我为了写个函数弄了几个#include吗？（这句是对那些看我代码的人说的）\n";
    Sleep(1000);
    cout << "不说了，上正菜\n";
    Sleep(1000);
    cout << "这是一个数学的定义新运算\n";
    Sleep(1000);
    cout << "如果你输入了x\n";
    Sleep(1000);
    cout << "那么我会输出[(x*x+5)/2]\n";
    Sleep(1000);
    cout << "x是随机生成的\n";
    Sleep(1000);
    cout << "x=\n";
    Sleep(1000);
    cout << a<<endl;
    Sleep(1000);
    cout << "[(x*x+5)/2]\n";
    Sleep(1000);
    cout << "快算，20s后输答案\n";
    Sleep(20000);
    cin >> b;
    c = (a * a + 5) / 2;
    if (b-c == 0)
        cout << "你对了" << endl;
    else
        cout<<"哈哈哈，你错了\n";

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
