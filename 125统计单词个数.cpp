#include<iostream>
using namespace std;
int main() {
	string a;
	getline(cin,a);
	int l=a.length();
	for(int i=0; i<l; i++) {
		if(a[i]==a[i+1]&&a[i]==' '&&a.length()!=1) {
			a.erase(i+1,1);
		}
		if(a.length()==1){
			cout<<1;
			return 0;
		}
	}
	if(a[0]==' '){
		a.erase(0,1);
	}
	if(a[a.length()]==' '){
		a.erase(a.length(),1);
	}
	int sum=0;
	l=a.length();
	for(int i=0; i<l; i++) {
		if(a[i]==' ') {
			sum++; 
		}
	}
	cout<<sum<<endl;
}
