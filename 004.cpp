#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	float s,h,up,down;
	up=15;
	down=25;
	h=2*150/15;
	s=(up+down)*h/2;
	printf("s=%0.2f\n",s);
	system("pause");
	return 0;	
}
