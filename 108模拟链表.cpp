#include<iostream>
using namespace std;
struct node{
	int v;
	int next;
};
node a[200001];
int n,m,p;
int k[5001],c[5001];
void insert(int u,int v){
	a[++p].v=v;
	a[p].next=c[u];
	c[u]=p;
	k[u]++;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		insert(u,v);
		insert(v,u);
	}
	for(int i=1;i<=n;i++){
		cout<<k[i]<<' ';
		for(int j=c[i];j>0;j=a[j].next)
			cout<<a[j].v<<' ';
			cout<<endl;
	} 
}
/*ÊäÈëÑùÀý
5 6
1 3
2 4
1 4
2 3
3 5
2 5
Êä³ö£º
2 4 3
3 5 3 4
3 5 2 1
2 1 2
2 2 3 
*/ 
