#include <iostream>
using namespace std;
int main()
{
    int temp,max=0;
	for(int i=1;i<=5;i++){
		cin>>temp;
		if(temp>=max){
			max=temp;
		}
	} 
	cout<<max<<endl;
}
