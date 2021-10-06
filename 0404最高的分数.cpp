#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
 int a,n,max=0;
scanf("%d",&n); 
for(int i=1;i<=n;i++)
{scanf("%d",&a);
if(a>max)max=a;
}
printf("×î´óÖµ%d",max);
return 0;
}
