#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n;
    cin>>n;
    for(int i=1;i<=n;i++)
     cout<<'*';
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<'*';
        for(int j=1;j<=n-2;j++)
            cout<<' ';
        cout<<'*';
        cout<<endl;
    }
   for(int i=1;i<=n;i++)
     cout<<'*';
    cout<<endl;    
} 

