#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n;
    cin>>n;
    for(int i=n;i>=0;i--)
    {
        for(int j=n-i;j>0;j--)
            cout<<' ';
        for(int j=2*i+1;j>0;j--)
            cout<<'A';
        cout<<endl;
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
            cout<<' ';
        for(int j=2*i+1;j>0;j--)
            cout<<'A';
        cout<<endl;
    }
} 

