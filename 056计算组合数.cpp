#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int jc(int n);
int main(){
	system("title 计算组合数");
	int m,n,s;
	while(1){
	cout<<"输入m，n"<<endl;
	cin>>m>>n;
	s=jc(m)/(jc(m-n)*jc(n));
	cout<<"结果："<<s<<endl<<endl;
}
}
int jc(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t*=i;
	}
	return t;
}
/*例6.2  计算组合数C(m,n)的值(n<=m<=10)。
   【分析】组合数C(m,n)可以理解为从m个数中任意取出n个数的所有情况数。求这个数值，有一个经典的计算方法：C(m,n)=m!/((m-n)!n!)。
*/
