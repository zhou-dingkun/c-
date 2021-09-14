#include<bits/stdc++.h>
using namespace std;
struct node {
	int cj;
	char name[20];
} a[1000];
int comp(const node &a,const node &b) {
	
	if (a.cj>b.cj) {
		return 1;
	}
	if (a.cj<b.cj) {
		return 0;
	}
	if(a.cj==b.cj) {
		if (strcmp(a.name,b.name)<0) {
			return 0;
		}else{
			return 1;
		}
	}
	/*return a.cj>b.cj||(a.cj==b.cj&&(strcmp(a.name,b.name)))*/
}

int main() {
	int k;
	int n;
	cout<<"输入学生人数n"<<endl;
	cin>>n;
	cout<<"输入学生姓名和成绩"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].cj;
	}
	sort (a+1,a+(n+1),comp);
	for(int i=1; i<=n; i++) {
		cout<<a[i].name<<' '<<a[i].cj<<endl;
	}
}/*
5
Xiaoxiao 396
Yingmo 405
Diyucailang 399
wansiqi 396
zhaoxuqi 450
*/
