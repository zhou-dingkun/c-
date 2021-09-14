#include<iostream>
using namespace std;

//	s1  s2
//	s1 ��� �� s2 ǰ�ߵ� ��С�ص�

string s;	//	��
int n;

void f(string t)
{
  //	t ���� s ��
  
  for(int i = s.length()-1; i >= 0; i--)
    if(s[i] == t[0]){
      //	s[i+1 ... s.length()-1] == t[1 ... ]
      int j = i+1, k = 1;
      while(j < s.length() && k < t.length()){
        if(s[j] != t[k])
          break;
        j++;
        k++;
      }
      if(j == s.length()){
        s += t.substr(k);
        return;
      }
    }
}
  
int main()
{
  cin >> n >> s;
  for(int i = 2; i <= n; i++){
    string t;
    cin >> t;
    f(t);
  }
  cout << s.length();
  
  return 0;
}
