#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,l;
  cin>>n>>l;
  int a[20005];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  sort(a+1,a+n+1);
  long long s=0;
  /*for(int i=1;i<=n;i++){
    cout<<a[i]<<endl;
  }*/
  for(int i=n;i>0;i--){
    s+=a[i];
    if(s>=l){
      cout<<n-i+1<<endl;
      break;
    }
  }
  return 0;
}
