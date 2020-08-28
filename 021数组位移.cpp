#include<iostream>
#include<iomanip>			   //调用setw函数需注明使用该库
const int n=10;
using namespace std; 
int a[n],temp; 
int main()
{
    cout<<"read "<<n<<" datas"<<endl;
　　for (int i=0; i<n; ++i) cin>>a[i];
　　temp=a[0];
　　for (int i=0; i<n-1; ++i) a[i]=a[i+1];
　　a[n-1]=temp;
　　cout<<"Result:"<<endl;
　　for (int i=0; i<n; ++i) cout<<setw(3)<<a[i];   //setw函数控制输出场宽
　　return 0;	 
 }
 
