#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
struct node {
	int cj;
	string name;
};
node a[101];
int main() {
	system("title ��߷�����ѧ������");
	int max=0;
	string mname;
	int n;
	cout<<"�����м����ˣ�"<<endl;
	cin>>n;
	cout<<"����ɼ��ͷ�����"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i].cj>>a[i].name;
		if(a[i].cj>=max) {
			mname=a[i].name;
		}
	}
	cout<<"��߷��ǣ�"<<mname<<endl;
}
