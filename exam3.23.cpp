// exam3.21-1
#include <iostream>
using namespace std;
int main()
{
int n;
float x,y;
//scanf("%f %f ",&x,&y);
cout<<"输入：每个月用在吃的方面所花费的金钱：x=";
cin>>x;
cout<<"输入：每个月总共花费的金钱：y=";
cin>>y;

n=100*x/y+0.5;
cout<<"恩格尔系数：n="<<n<<endl;

switch(n/10)
{
    case 0:printf("极其富裕\n");break;
    case 1:printf("非常富裕\n");break;
    case 2:printf("一般富裕\n");break;
    case 3:printf("一般\n");break;
    case 4:printf("小康\n");break;
    case 5:printf("温饱\n");break;
   
//	case 1:cout<<"f=n"<<endl;break;
//    case 2:cout<<"f=n*n"<<endl;break;
//    case 3:cout<<"f=n*n*n"<<endl;break;
	default: printf("贫穷"); break;	
}
	return 0;
}
