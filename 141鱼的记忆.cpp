#include<iostream>

#include<algorithm>
#include<vector>	//	线性表
#include<stack>	//	栈
#include<queue>	//	队列

using namespace std;
/*
栈：  操作受限的 线性表
    只能在栈顶进行插入和删除   入栈   出栈
    
    先进后出  first in last out    FILO
    
队列：  操作受限的 线性表
     只能队尾入队   只能队首出队
     
     先进先出  first in first out    FIFO
*/

int n, m;
queue<int> q;	//	脑子
bool to[1005];	//	to[i]: true   记得i号顾客    

bool check(int x)
{
  //	返回  是否需要询问x顾客
  if(to[x])
    return false;
  
  if(q.size() == m){
    int t = q.front();
    q.pop();
    to[t] = false;
  }
  
  q.push(x);
  to[x] = true;
  
  return true;
}

int main()
{
  cin >> n >> m;
  
  int ans = 0;
  for(int i = 1; i <= n; i++){
    int t;
    cin >> t;
    
    if(check(t)) ans++;
  }
  
  cout << ans;
  
  return 0;
}