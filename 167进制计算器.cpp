#include <iostream>
#include<cmath>
using namespace std;
int zh(char ch) {
	if ((ch >= '0') && (ch <= '9'))
		return ch - 48;
	else if ((ch >= 'a') && (ch <= 'f'))
		return ch - 87;
	else if ((ch >= 'A') && (ch <= 'F'))
		return ch - 55;
	else
		return -1;
}
long long  to10(string b, int x) {
	int c;
	c = b.length();
	long long out = 0;
	int wq = 0;
	for (int i = c - 1; i >= 0; i--) {
		out += zh(b[i]) * pow(x, wq);
		wq++;
	}
	return out;
}
void  dg(int n, int x) {
	if (n == 0) return;
	dg(n / x, x);
	cout << n % x;
}
char zf(int n) {
	if (n < 10) {
		return n + '0';
	}
	else {
		return n - 10 + 'a';
	}

}
int main() {
#include<iostream>
#include<cmath>
using namespace std;
int zh(char ch){
  if((ch>='0')&&(ch<='9'))
    return ch-48;
  else if((ch>='a')&&(ch<='f'))
    return ch-87;
  else if((ch>='A')&&(ch<='F'))
    return ch-55;
    else
      return -1;
}
long long to10(string b,int x){
  int c;
  c=b.length();
  long long out=0;
  int wq=0;
  for(int i=c-1;i>=0;i--){
    out+=zh(b[i])*pow(x,wq);
    wq++;
  }
  return out;
}
char zf(int n);
void dg(int n,int x){
  if(n==0)return;
  dg(n/x,x);
  cout<<zf(n%x);
}
char zf(int n){
  if(n<10){
    return n+'0';
  }
  else{
    return n-10+'a';
  }
}
int main(){
  string a,b;
  int n;
  cin>>n;
  cin>>a>>b;
  char  op;
  cin>>op;
  int out;
  int f;
  int z1,z2;
  if(op=='+'){
    z1=to10(a,n);
    z2=to10(b,n);
    f=z1+z2;
    dg(f,n);
  }
  else{
    if(op=='-'){
      z1=to10(a,n);
      z2=to10(b,n);
      f=z1-z2;
      if(f<0){
        f=abs(f);
        cout<<'-';
      }
      dg(f,n);
    }
    else{
      if(op=='*'){
        z1=to10(a,n);
        z2=to10(b,n);
        f=z1*z2;
        dg(f,n);
      }
      else{
        z1=to10(a,n);
        z2=to10(b,n);
        f=z1+z2;
        dg(f,n);
      }
    }
  }
}