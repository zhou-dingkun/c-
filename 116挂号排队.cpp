#include<bits/stdc++.h>
using namespace std;
struct node {
	string name;
	int old;
} a[1000];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].old;
	}
	for (int i=n; i>=1; i--)	{
		for (int j=1; j<=n-i; j++)
			if (a[j].old<a[j+1].old&&a[j].old>=60&&a[j].old>=60)
				swap(a[j],a[j+1]);
	}
	for(int i=1; i<=n; i++) {
		cout<<a[i].name<<endl;
	}
}
