#include <bits/stdc++.h>
using namespace std;
int main ()
{ int x,n=0,min,max,s=0;
  while (scanf("%d",&x)==1)
  {
    s+=x;
    if (x<min) min=x;
    if (x>max) max=x;
    ++n;
  }
  printf("最小值=%d 最大值=%d 平均值=%.3lf\n",min,max,(double)s/n);
  return 0;
}


