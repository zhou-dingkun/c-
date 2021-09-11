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
/*班上有学生若干名，给出每名学生的年龄（整数），
求班上所有学生的平均年龄，保留到小数点后两位。*/
