// exam3.21-1
#include <iostream>
using namespace std;
int main()
{
int n;
float x,y;
//scanf("%f %f ",&x,&y);
cout<<"���룺ÿ�������ڳԵķ��������ѵĽ�Ǯ��x=";
cin>>x;
cout<<"���룺ÿ�����ܹ����ѵĽ�Ǯ��y=";
cin>>y;

n=100*x/y+0.5;
cout<<"�����ϵ����n="<<n<<endl;

switch(n/10)
{
    case 0:printf("���主ԣ\n");break;
    case 1:printf("�ǳ���ԣ\n");break;
    case 2:printf("һ�㸻ԣ\n");break;
    case 3:printf("һ��\n");break;
    case 4:printf("С��\n");break;
    case 5:printf("�±�\n");break;
   
//	case 1:cout<<"f=n"<<endl;break;
//    case 2:cout<<"f=n*n"<<endl;break;
//    case 3:cout<<"f=n*n*n"<<endl;break;
	default: printf("ƶ��"); break;	
}
	return 0;
}
