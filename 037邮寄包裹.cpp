#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin>>a; 
    if(a>30)
    {
    	cout<<"Fail";
	}
	else{
		if(a<=20)
		{
			if(a>10)
			{
				printf("%.2f",a*0.75+0.2);
			}
			else
			{
				printf("%.2f",a*0.8+0.2);
			}
		}1
		else{
			printf("%.2f",a*0.7+0.2);
		}
	}
}
