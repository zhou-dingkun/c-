#include<bits/stdc++.h>
using namespace std;
int main()
{
int s1,s2,s3,s4,s5,s6,s7;
cout<<"�����һ�μ�ͷţ(���ڵڶ���) s1=";
cin>>s1;
cout<<"�����һ�γԼ���(���ڵڶ���) s2=";
cin>>s2;
cout<<"����ڶ��μ�ͷţ(С�ڵ�һ��) s3=";
cin>>s3;
cout<<"����ڶ��γԼ���(С�ڵ�һ��) s4=";
cin>>s4;
s5=s1*s2;
s6=s3*s4;
s7=(s5-s6)/(s2-s4);
cout<<"�����ݿɳ�"<<s7<<"��"<<endl;	
}
