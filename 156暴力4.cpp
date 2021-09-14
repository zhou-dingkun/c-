/*

算法：  

暴力搜索   尝试一个问题的所有可能性  从中挑选出需要的情况
搜索剪枝   提前判断

全排列问题： 3个数的全排列

搜索算法： 给问题分层   每层考虑可能性

___ ___ ___ ___ ... ___ ___   n个空  填入数字1-n  不重复

第一个空：       1   2   3   4   5   ....   n
第二个空：       1   2   3   4   5   ....   n
第三个空：       1   2   3   4   5   ....   n
.....
第 n个空：       1   2   3   4   5   ....   n


练习：   输入n m     1->n个数中选m个  不能重复  的所有方案

第1个选谁         1                2            3      ... n
第2个选谁     1 2 3 ... n
....
第m个选谁     1 2 3 ... n

*/
#include<iostream>
using namespace std;

const int N = 105;
int a[N];
bool used[N];	//	used[i]: true   i用过了 
int n, m;

void show()
{
  for(int i = 1; i <= m; i++)
    cout << a[i] << ' ';
  cout << endl;
}

void search(int t)
{
  if(t > m){
    //	a[1 ... m]
    show();
    return;
  }
  for(int i = a[t - 1] + 1; i <= n; i++){
    //	剪枝
    if(used[i]) continue;
    
    //	搜索前进  打标记  存状态 ....
    a[t] = i;
    used[i] = true;
    
    search(t + 1);
    
    //	还原  搜索前边做了什么  搜索后边就还原什么
    a[t] = 0;
    used[i] = false;
  }
}

int main()
{
  cin >> n >> m;
  
  search(1);
  
  return 0;
}
