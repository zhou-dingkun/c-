#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
 int a,n,max=0,min=100;
scanf("%d",&n); 
for(int i=1;i<=n;i++)
{scanf("%d",&a);
if(a>max)
max=a;
if(a<min)
min=a;
}
printf("���ֵ=%d��Сֵ=%d",max,min);
return 0;
}
