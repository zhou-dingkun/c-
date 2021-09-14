#include<iostream>
using namespace std;
int a[10][10];
int n;
bool jc(int y,int x,int t){
  for(int i=1;i<=9;i++){
    if(a[y][i]==t){
      return 0;
    }
  }
  for(int i=1;i<=9;i++){
    if(a[i][x]==t){
      return 0;
    }
  }
  int zsx=((x-1)/3)*3+1;
  int zsy=((y-1)/3)*3+1;
  for(int i=zsy;i<zsy+3;i++){
    for(int j=zsx;j<zsx+3;j++){
      if(a[i][j]==t){
        return 0;
      }
    }
  }
  return 1;
}
int main(){
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      cin>>a[i][j];
    }
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    int x,y,t;
    cin>>y>>x>>t;
    if(jc(y,x,t))
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }
}
