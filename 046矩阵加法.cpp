#include<iostream> 
#include<windows.h>
using namespace std;
int a[7][7];
int main()
{
	system("title �б�ӷ�");
	cout<<"����"<<endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == j || i + j == 7)
			{
				a[i][j] += 10;
			}
		}
	}
	cout<<"���"<<endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}


}
