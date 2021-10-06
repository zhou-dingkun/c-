#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	float s,h,down,up;
	up=15;
	down=25;
	h=150*2/up;
	s=(up+down)*h/2;
	printf("s=%0.2f\n",s);
	system("pause");
	return 0;
}
