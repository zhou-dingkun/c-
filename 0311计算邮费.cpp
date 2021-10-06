#include<bits/stdc++.h> 
using namespace std;
int main()
{  
 int x,s=8;
 char z;
 cout<<"请输入重量和是否加急： " ;
 cin>>x>>z;
 if(x>1000)
   if((x-1000)%500==0) s=s+(x-1000)/500*4;
   else s=s+((x-1000)/500+1)*4;
 if(z=='y') s=s+5;
 cout<<"最后邮费是："<<s;
 
}
