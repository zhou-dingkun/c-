#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int pdss(long long int a) {
	if(a==2||a==1) {
		return 2;
	} else {
		int j=2;
		while(j<=sqrt(a)&&a%j!=0) {
			j++;
		}
		if(a%j==0)
			return 3;
		else
			return 2;
	}

}
int main() {
	int ko=0;
	bool pd=0;
	for(int i=6; i<=100; i+=2) {
		for(int a=1; a<=i; a++) {
			pd=0;
			ko=0;
			for(int b=1; b<=i; b++) {
				if((pdss(a)==2&&pdss(b)==2)&&((a+b)==i)) {
					cout<<i<<'='<<a<<'+'<<b<<endl;

					pd=1;
					ko=b;
					break;

				}
			}
			if(pd==1) {
				break;
			}
		}
	}
}
