// ConsoleApplication1.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include<iostream> 
#include<windows.h>
using namespace std;
int a[11][11],n;
int main()
{
	system("title �б�ӷ�");
	cout << "�������Ǽ��˼��ľ���" << endl;
	cin >> n;
	cout << "����" << endl;
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
	
	cout << "���" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n ;j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}


}

