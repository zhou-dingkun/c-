#include<bits/stdc++.h>
using namespace std;
int main()
{
	float s,up,down,h;
	up=15;
	down=25;
	h=150*2/up;
	s=(up+down)*h/2;
	printf("上底=%0.2f 下底=%0.2f高=%0.2f梯形面积=%0.2f\n",up,down,h,s);
	return 0;
}
