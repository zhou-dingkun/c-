// exam2.19
#include <iostream>
using namespace std;
int main()
{
int x,y,x1,x2,x3;

cout<<"input x="<<endl;
cin>>x;

x1=x/100;
x2=(x-x1*100)/10;
x3=x%10;
y=x3*100+x2*10+x1;

	cout<<y<<endl;

	return 0;
}
