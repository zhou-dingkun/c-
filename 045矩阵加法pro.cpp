// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream> 
#include<windows.h>
using namespace std;
int a[11][11],n;
int main()
{
	system("title 列表加法");
	cout << "输入有是几乘几的矩阵" << endl;
	cin >> n;
	cout << "输入" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j || i + j == n+1)
			{
				a[i][j] += 10;
			}
		}
	}
	
	cout << "输出" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n ;j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}


}

