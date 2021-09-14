#include <iostream>
using namespace std;
long long a[1000]={0,1,1};
long long int out(long long int n){
	if(a[n])
		return a[n];
	return a[n]=(out(n-1)+out(n-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<out(n)<<endl;
}