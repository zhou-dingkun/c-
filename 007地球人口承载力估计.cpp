#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,a,y,d;
double s;
cout<<"在地球上有x亿人时 x=";
cin>>x;
cout<<"这种情况下可用a年 a=";
cin>>a;
cout<<"在地球上有y亿人时 y=";
cin>>y;
cout<<"这种情况下可用d年 d=";
cin>>d;
s=(y*d-x*a)/(d-a);
printf("%10.2lf",s);
cout<<"╭┘└┘└╮"<<endl;
cout<<"└┐．．┌┘────╮"<<endl;
cout<<"╭┴──┤          ├╮"<<endl;
cout<<"│ｏ　ｏ│          │ ●"<<endl;
cout<<"╰─┬─╯          |   HAPPY   牛   YEAR  "<<endl;
} 
