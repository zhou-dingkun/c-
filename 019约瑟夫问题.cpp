#include<iostream>
using namespace std;
int renshu,weizhi,a,b,c;
bool panduan[101];
int main()
{
  cout<<"���������<100��������������������ڼ���������"<<endl;
  cin>>renshu>>weizhi; 
  for(a=1;a<=renshu;a++)
  {
  	panduan[a]=false;
   } 
  a=b=c=0;
  while(1)
  {
  	++a;
  	if(a==renshu+1)
	  {
	  	a=1;
	  }
	if(panduan[a]==false)
	  {
		++b;
	  }  
	if(b==weizhi)
	  {
	 	 b=0;
		 cout<<a<<" ";
		 panduan[a]=true;
		 c++;
		  
      }	 
	if(c==weizhi)
	{
		break;
	 } 
  }
  
} 
