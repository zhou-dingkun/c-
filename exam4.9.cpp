// exam4.9
#include <iostream>
using namespace std;
int main()
{
float score,tot=0;
//�ܷ�tot��ʼ��Ϊ0������ͳ���ܷ� 
 int pep=0;
//pep������ͳ������ 
cout<<"���룺score=";
cin>>score;

while(score!=0)
{
     pep++;
	 tot+=score;
// tot=tot+score
	 cin>>score;	
}
cout<<"�༶ƽ����="<<tot/pep<<endl;
	return 0;
}
