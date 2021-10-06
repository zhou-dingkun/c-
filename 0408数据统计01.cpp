#include <bits/stdc++.h>
using namespace std;
int main ()
{ int x,y,n=0,min,max,s=0;
  cin>>x; 
 for(int i=1;i<=x;i++)
  { cin>>y;
    s+=y;
    if(i==1){min=y;max=y;}
    if (y<min) min=y;
    if (y>max) max=y;
    ++n;
  }
  printf("最小值=%d 最大值=%d 平均值=%.3lf\n",min,max,(double)s/n);
  return 0;
}


