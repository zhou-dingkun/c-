#include<iostream>
#include<algorithm>
#include<windows.h>
using namespace std;
struct node {
	string name;
	int grade;
} a[1000];
int comp(node& a,node& b) {
	if(a.grade>b.grade)
		return 1;
	if(a.grade<b.grade)
		return 0;
	if(a.name<b.name)
		return 1;
	return 0;
}
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].name>>a[i].grade;
	}
	sort(a + 1, a + n+1, comp);
	for (int i = 1; i <= n; i++) {
		cout<< a[i].name<<' '<<a[i].grade<<endl;
	}
	Sleep(1000);
}
