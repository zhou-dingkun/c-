// exam4.16
#include <iostream>
using namespace std;
int main()
{
//1+2+3+....+i>n
int n;
int i=1;
int sum=0;
cin>>n;
do
{
	sum=sum+i;
	i++;
}
while(sum<n);

cout<<i-1<<endl;

//while(i<=5)
//{
//     cout<<i;
	return 0;
}
