#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
 int a,n,max,min;
scanf("%d",&n); 
scanf("%d",&a);
max=a;
min=a;
for(int i=1;i<=n-1;i++)
{ 
  scanf("%d",&a);
  if(a>max)max=a;
  if(a<min)min=a;
}
printf("最大值=%d，最小值=%d，最大跨度值=%d\n",max,min,max-min);
return 0;
}
