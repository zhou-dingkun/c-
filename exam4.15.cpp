// exam4.15
#include <iostream>
using namespace std;
int main()
{
//���������������������Լ��

int a,b,gcd;
cin>>a;
cin>>b;

if(a>b) gcd=b;
else gcd=a;

// gcd=a>b?b:a;
cout<<"�Ƚ�С������"<<gcd<<endl;

while(gcd>1&&(a%gcd!=0||b%gcd!=0)) 
{
	gcd--;
}
cout<<"������Ϊ"<<a<<";"<<b<<endl;
 
cout<<"���Լ��="<<gcd<<endl;
	return 0;
}
