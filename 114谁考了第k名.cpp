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
	cout<<"����ѧ������n��Ҫ���ҵڼ����ĳɼ�k"<<endl;
	cin>>n>>k;
	cout<<"����ѧ��ѧ�źͳɼ�"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].cj;
	}
	sort (a+1,a+(n+1),comp);
	cout<<"ѧ��Ϊ"<<a[k].name<<"��ѧ���ǵ� "<<k<<"�����ɼ�Ϊ��"<<a[k].cj<<endl;
}
