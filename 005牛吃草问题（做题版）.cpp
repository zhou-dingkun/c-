#include<bits/stdc++.h>
using namespace std;
int main()
{
int s1,s2,s3,s4,s5,s6,s7;
cout<<"输入第一次几头牛(大于第二次) s1=";
cin>>s1;
cout<<"输入第一次吃几天(大于第二次) s2=";
cin>>s2;
cout<<"输入第二次几头牛(小于第一次) s3=";
cin>>s3;
cout<<"输入第二次吃几天(小于第一次) s4=";
cin>>s4;
s5=s1*s2;
s6=s3*s4;
s7=(s5-s6)/(s2-s4);
cout<<"新生草可吃"<<s7<<"天"<<endl;	
}
