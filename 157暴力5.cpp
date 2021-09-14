/*

一、实验目标

来自洛谷（P1605）

给定一个N*M方格的迷宫，迷宫里有T处障碍，障碍处不可通过。给定起点方格和终点方格，从起点方格移动到终点方格，每次只能按照上下左右的方向移动一个格子，每个方格最多经过1次。问：有多少种从起点坐标到终点坐标的方案。

数据保证起点上没有障碍。

输入格式：

第一行n、m和k，n为行、m为列、k为障碍总数。
第二行起点坐标sx、sy，终点坐标fx、fy。
接下来k行，每行为障碍点的坐标x、y。

输入样例1：
2 2 1
1 1 2 2
1 2

输出样例1：
1

输入样例2：
5 5 5 
1 2 5 5
2 1
2 2
2 3
2 4
3 4

输出样例2：
10

数据范围：1<=N、M<=5

*/
#include<iostream>
using namespace std;

const int N = 105;
int a[N][N];	//	a[i][j]: 0 能走    1 障碍物
bool vis[N][N];	//	vis[i][j]: true  走过了
int n, m, k, ans;
int sy, sx;	//	起点
int fy, fx;	//	终点
/*
第一步：     上   下    左    右
第二步：     上   下    左    右
....
         到达终点就停
*/

//	增量数组   dy[i] dx[i]  一个方向上的坐标变化
int dy[5] = {0, -1, 1, 0, 0};
int dx[5] = {0, 0, 0, -1, 1};
void search(int t, int y, int x)
{
  //	第 t 步    当前位置是  a[y][x]
  if(y == fy && x == fx){
    ans++;
    return;
  }
  for(int i = 1; i <= 4; i++){	//	i: 方向  上下左右  
    int ny = y + dy[i];
    int nx = x + dx[i];
    //	[y][x] 在i方向上的下一个位置是 [ny][nx]
    if(a[ny][nx] == 1) continue;
    if(ny < 1 || ny > n) continue;
    if(nx < 1 || nx > m) continue;
    if(vis[ny][nx]) continue;
    
    vis[ny][nx] = true;
    search(t + 1, ny, nx);
    vis[ny][nx] = false;
  }
}

int main()
{
  cin >> n >> m >> k;
  cin >> sy >> sx >> fy >> fx;
  for(int i = 1; i <= k; i++){
    int y, x;
    cin >> y >> x;
    a[y][x] = 1;
  }
  
  vis[sy][sx] = true;
  search(1, sy, sx);
  
  cout << ans;
  
  return 0;
}










