// exam4.15
#include <iostream>
using namespace std;
int main()
{
//求两个数的最大公因数、公约数

int a,b,gcd;
cin>>a;
cin>>b;

if(a>b) gcd=b;
else gcd=a;

// gcd=a>b?b:a;
cout<<"比较小的数是"<<gcd<<endl;

while(gcd>1&&(a%gcd!=0||b%gcd!=0)) 
{
	gcd--;
}
cout<<"两个数为"<<a<<";"<<b<<endl;
 
cout<<"最大公约数="<<gcd<<endl;
	return 0;
}
