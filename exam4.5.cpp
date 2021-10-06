// exam4.5
#include <iostream>
using namespace std;
int main()
{
int i;
int sum;
sum=0;
//cout<<"ÊäÈë£ºn=";
//cin>>n;

for (i=1;i<=100;i++)
    if (i%2==0) sum=sum+i;
	
	cout<<"sum="<<sum<<"  ";

	return 0;
}
