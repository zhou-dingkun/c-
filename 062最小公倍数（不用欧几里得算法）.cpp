#include<bits/stdc++.h> 
#include"zdgys&zxgbs.cpp"
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int gbs=zdgys(m,n);
	while(gbs%m!=0||gbs%n!=0){
		gbs++;
	}
	cout<<gbs;
}
