#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
	int n,age[105];
	float avage=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>age[i];
		avage=avage+age[i];	
	}
	avage=avage/n;
	cout<<setprecision(2)<<fixed<<avage;
	return 0;
} 
/*������ѧ��������������ÿ��ѧ�������䣨��������
���������ѧ����ƽ�����䣬������С�������λ��*/
