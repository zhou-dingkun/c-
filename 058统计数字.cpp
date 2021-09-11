#include<bits/stdc++.h>
using namespace std;
bool js(int a);
int x;
int main(){
    long long int n,cishu=0;
    cin>>n>>x;
    for(int i=0;i<=n;i++)
    {
    	if(js(i)==1){
    		cishu++;
		}
	}
	cout<<cishu<<endl;
}
bool js(int a)
{int b;
	while(a)
	{
		
		if(a%10==x)
		{
		return true;
	}
	a/=10;
		
	}
	return false;
}//本程序用来输出从0到s，x出现了几次 
