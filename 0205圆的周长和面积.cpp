#include<iostream>
#include<cstdio>
using namespace std;
const double PI=3.1415926;
int main()
{
	float r,c,s;
    printf("r=");
    scanf("%f",&r);
	c=2*PI*r;
	s=PI*r*r;
    printf("�ܳ�=%0.2f  ���=%0.2f\n",c,s);
}
