#include<bits/stdc++.h> 
using namespace std;
int jc(int n);
int jc(int n)
{
	int s=1;
	for(int i=1;i<=n;++i)
	 s*=i;
	return s;
}
int main()
{
    int he=0,n;
    cin>>n;
    for(int i=1;i<=n;++i)
     he+=jc(i);
    cout<<he;    
	return 0;
}
