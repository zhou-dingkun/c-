// exam3.15
#include <iostream>
using namespace std;
int main()
{


int year;

cout<<"输入年份：year=";
cin>>year;

if(year%400==0)  cout<<year<<"是闰年"<<endl;
else
     if(year%4==0) 
          if(year%100!=0)	cout<<year<<"是闰年"<<endl; 
	      else cout<<year<<"不是闰年"<<endl;
     else cout<<year<<"不是闰年"<<endl;

	return 0;
}
