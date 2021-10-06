#include<bits/stdc++.h>
using namespace std; 
int main()
{int n,m,x;
 cin>>n>>m;
 for(int i=1;i<=n;++i)
    {   x=1;	    
	   	for(char a='A'+i-1;a>'A';--a)
       	  if(x<=m) 
			{
			cout<<a;  x=x+1; 
			}			
       	for(char b='A';b<='A'+m-i;++b)
       	 cout<<b;      	
		cout<<endl;
    }
}

