// exam3.6
#include <iostream>
using namespace std;
int main()
{


int cup;
float a,b;

cout<<"输入杯子数量：cup=";
cin>>cup;

a=cup*3*0.88;
b=(cup-cup/8.0)*3;

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;


if(a<b) cout<<"大洋商城"<<endl;

else cout<<"百汇商城"<<endl;




	return 0;
}
