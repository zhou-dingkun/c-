#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	float s,h,up,down;
	scanf("%f",&up);
	scanf("%f",&down);
	h=2*150/up;
	s=(up+down)*h/2;
	printf("s=%0.2f\n",s);
	system("pause");
	return 0;	
}
