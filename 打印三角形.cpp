#include<bits/stdc++.h>
using namespace std;
int main ()
{ int m;
  cin>>m;
  for(int i=1;i<=m;i++)
  { 
  for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
  for(int j=1;j<=2*i-1;j++)
      cout<<'*';
    cout<<endl;
  }
}

