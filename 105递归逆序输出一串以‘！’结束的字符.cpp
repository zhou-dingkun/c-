#include<bits/stdc++.h>
using namespace std;
char ch[1000];
void gth(int x){
	if(ch[x]!='!')
	gth(x+1);
	else
	return;
	printf("%c",ch[x]);
}
int main(){
	gets(ch);
	gth(0);
	
}
