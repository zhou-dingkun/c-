#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
 int a,n,s=1;
scanf("%d%d",&a,&n);
for(int i=1;i<=n;i++)
 s=s*a;
printf("%d",s);
}
