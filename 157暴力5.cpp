/*

һ��ʵ��Ŀ��

������ȣ�P1605��

����һ��N*M������Թ����Թ�����T���ϰ����ϰ�������ͨ����������㷽����յ㷽�񣬴���㷽���ƶ����յ㷽��ÿ��ֻ�ܰ����������ҵķ����ƶ�һ�����ӣ�ÿ��������ྭ��1�Ρ��ʣ��ж����ִ�������굽�յ�����ķ�����

���ݱ�֤�����û���ϰ���

�����ʽ��

��һ��n��m��k��nΪ�С�mΪ�С�kΪ�ϰ�������
�ڶ����������sx��sy���յ�����fx��fy��
������k�У�ÿ��Ϊ�ϰ��������x��y��

��������1��
2 2 1
1 1 2 2
1 2

�������1��
1

��������2��
5 5 5 
1 2 5 5
2 1
2 2
2 3
2 4
3 4

�������2��
10

���ݷ�Χ��1<=N��M<=5

*/
#include<iostream>
using namespace std;

const int N = 105;
int a[N][N];	//	a[i][j]: 0 ����    1 �ϰ���
bool vis[N][N];	//	vis[i][j]: true  �߹���
int n, m, k, ans;
int sy, sx;	//	���
int fy, fx;	//	�յ�
/*
��һ����     ��   ��    ��    ��
�ڶ�����     ��   ��    ��    ��
....
         �����յ��ͣ
*/

//	��������   dy[i] dx[i]  һ�������ϵ�����仯
int dy[5] = {0, -1, 1, 0, 0};
int dx[5] = {0, 0, 0, -1, 1};
void search(int t, int y, int x)
{
  //	�� t ��    ��ǰλ����  a[y][x]
  if(y == fy && x == fx){
    ans++;
    return;
  }
  for(int i = 1; i <= 4; i++){	//	i: ����  ��������  
    int ny = y + dy[i];
    int nx = x + dx[i];
    //	[y][x] ��i�����ϵ���һ��λ���� [ny][nx]
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










