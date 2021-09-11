#include<iostream>
#include<windows.h>
using namespace std;
int a[10000];
int main() {
	int n,ge=0;
	system("title 求几个同学及格"); 
	while(1){
	cout<<"输入有几个同学"<<endl; 
	cin>>n;
	cout<<"输入各个同学的分数"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(a[i]>=60)
			ge++;
	}
	cout<<"有"<<ge<<"个学生及格"<<endl;
}
}
