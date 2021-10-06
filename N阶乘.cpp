#include<bits/stdc++.h> 
using namespace std;
int main()
{
  long long s;
  int n;
  s=1;
  scanf("%d",&n);
  printf("%d!=1",n);
  for (int i=1; i<=n ; ++i) 
   {s*=i;
    printf("*%d",i);
   } 
  printf("=%lld\n",s);
  return 0;
}

