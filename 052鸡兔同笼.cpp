#include<iostream>
using namespace std;
int main(){
	int tou,jiao,ji=0,tu=0;
	cout<<"输入头和脚的数量"
	cin>>tou>>jiao;
	ji=(4*tou-jiao)/2;
	tu=tou-ji; 
	cout<<ji<<" "<<tu;
}
