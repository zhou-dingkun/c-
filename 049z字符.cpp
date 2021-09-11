#include<iostream>
using namespace std;
int main()
{
char sr,zf[101];
int i=0,j,x=0;
cout<<"ÊäÈë"<<endl;
cin>>sr;
while(sr!='.'){
	++j;
	zf[j]=sr;
	cin>>zf;
} 

while(i<=j/2)
{
i++;
if(zf[i]==zf[j-i])
{
	x++;
	}	
}
if(x==j/2)
{
	cout<<"yes"<<endl; 
}
else{
	cout<<"no"<<endl;
}
}
