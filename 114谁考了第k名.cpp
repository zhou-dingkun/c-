#include<bits/stdc++.h>
using namespace std;
struct node {
	int cj;
	string name;
}a[1000];
int comp(node a,node b){
	return a.cj>b.cj;
}

int main() {
	int k;
	int n;
	cout<<"输入学生人数n和要查找第几名的成绩k"<<endl;
	cin>>n>>k;
	cout<<"输入学生学号和成绩"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].cj;
	}
	sort (a+1,a+(n+1),comp);
	cout<<"学号为"<<a[k].name<<"的学生是第 "<<k<<"名，成绩为："<<a[k].cj<<endl;
}
