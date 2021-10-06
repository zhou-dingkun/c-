#include <bits/stdc++.h>
using namespace std;
int main()
{  int x,a,y,b;
   double s;
   scanf("%d%d%d%d",&x,&a,&y,&b);
   s=(y*b-x*a)/(b-a);
   printf("%10.2lf",s);
   return 0;
}
