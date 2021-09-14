#include <iostream>
using namespace std;
int pdss(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
  int sum=0;
    int a;cin>>a;
  for(int i=1;i<=a;i++){
    if(pdss(a)==1){
     sum++;
   }
  }
   cout<<sum<<endl;
}
