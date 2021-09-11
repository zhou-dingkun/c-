#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	system("title ×Ö·ûÌæ»»"); 
	char a[201];
	int i=0;
	char x,y;
	cout<<"ÊäÈë×Ö·û´®"<<endl; 
	while(((a[i++]=getchar())!='\n')); 
	cout<<"ÊäÈëÌæ»»µÄ"<<endl;
	x=getchar();
	getchar();
	y=getchar();
	for(int g=0;g<i;g++)
	{
		if(a[g]==x){
			cout<<y;
		}
		else
		{
			cout<<a[g];
			
		}
	}
}
