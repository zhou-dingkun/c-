#include<iostream>
#include<windows.h>
using namespace std;
bool a[101];
int t;
int main() {
	memset(a,1,sizeof(a));
	a[1]=false;
	for(int i=2; i<=10; ++i) {
		if(a[i])
			for(int j=2; j<=100/i; ++j)

			{

				a[i*j]=false;
			}
	}
	t=0;
	for(int z=1; z<101; z++) {

		if(a[z]==true) {
			cout<<z<<" "; 
			    t++;
			if(t%5==0) {
				cout<<endl;
			}
		}
	}
}
