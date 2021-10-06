#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
double n,s,t;
s=0;
scanf("%lf",&n); 
for(int i=1;i<=n;++i)
{scanf("%lf",&t);
s+=t;
}
printf("%0.1lf%0.5lf\n",s,s/n);
return 0;
}
