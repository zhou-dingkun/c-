#include<bits/stdc++.h>
using namespace std;
int main()
{
const double p=3.1415926536;
double r,h,s1,s2,s;
printf("��ֱ�����r��h\n"); 
scanf("%lf%lf",&r,&h);
s1=p*r*r;
s2=2*p*r*h;
s=2*s1+s2;
printf("���=%0.3lf\n",s);
return 0;
} 
