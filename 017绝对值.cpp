#include<bits/stdc++.h>
using namespace std;
int main() {
	float a=0;
	while(1) {
		cin>>a;
		if(a>0) {
			printf("%.2f",a);//精确到小数点后两位 
		} else {
			printf("%.2f",-a);
		}
	}

}
