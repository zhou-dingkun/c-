#include<iostream>
using namespace std;

/*
2 1 0 6 3 0 8 9 0
0 4 0 0 0 7 0 0 5
0 0 0 9 0 0 0 0 7
0 0 2 0 0 0 0 4 0
4 0 0 1 0 2 0 0 6
0 6 0 0 0 0 1 0 0
7 0 0 0 0 3 0 0 0
8 0 0 7 0 0 0 6 0
0 3 5 0 9 4 0 2 1
*/

int a[10][10];
int n;

bool check(int y, int x, int t)
{
  //	a[y][x] = t;  能填则返回true
  
  //	检查行  a[y][1 ... 9]
  for(int i = 1; i <= 9; i++)
    if(a[y][i] == t)
      return false;
  
  //	检查列  a[1 ... 9][x]
  for(int i = 1; i <= 9; i++)
    if(a[i][x] == t)
      return false;
  
  //	检查宫  确定 [y][x] 所在宫的左上角坐标 [Y][X]
 int Y = ((y - 1) / 3) * 3 + 1;
  int X = ((x - 1) / 3) * 3 + 1;
  for(int i = Y; i < Y + 3; i++)
    for(int j = X; j < X + 3; j++)
      if(a[i][j] == t)
        return false;
  
  return true;
}
  
int main()
{
  for(int i = 1; i <= 9; i++)
    for(int j = 1; j <= 9; j++)
      cin >> a[i][j];
  cin >> n;
  for(int i = 1; i <= n; i++){
    int y, x, t;
    cin >> y >> x >> t;
    
    //	a[y][x] = t;  ???
    if(check(y, x, t)) cout << "yes\n";
    else cout << "no\n";
  }
  
  return 0;
}
