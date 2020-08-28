#include<bits/stdc++.h>
using namespace std;
int main()
{
int fenshu[11];
int zhongfen=0;
for(int cishu=1;cishu<=10;++cishu)
{
	cin>>fenshu[cishu];
	zhongfen+=fenshu[cishu];
 } 
 int pinjunfen=zhongfen/10;
 cout<<"有人没到平均分，这是他们的分数："<<endl; 
 for(int cishu=1;cishu<=10;++cishu)
 {
 	if(fenshu[cishu]<pinjunfen)
 	{
 		cout<<fenshu[cishu]<<endl; 
    }
 }
} 
