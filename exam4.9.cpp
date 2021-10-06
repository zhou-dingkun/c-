// exam4.9
#include <iostream>
using namespace std;
int main()
{
float score,tot=0;
//总分tot初始化为0，用来统计总分 
 int pep=0;
//pep是用来统计人数 
cout<<"输入：score=";
cin>>score;

while(score!=0)
{
     pep++;
	 tot+=score;
// tot=tot+score
	 cin>>score;	
}
cout<<"班级平均分="<<tot/pep<<endl;
	return 0;
}
