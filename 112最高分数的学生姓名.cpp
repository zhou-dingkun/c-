#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
struct node {
	int cj;
	string name;
};
node a[101];
int main() {
	system("title 最高分数的学生姓名");
	int max=0;
	string mname;
	int n;
	cout<<"输入有几个人："<<endl;
	cin>>n;
	cout<<"输入成绩和分数："<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i].cj>>a[i].name;
		if(a[i].cj>=max) {
			mname=a[i].name;
		}
	}
	cout<<"最高分是："<<mname<<endl;
}
