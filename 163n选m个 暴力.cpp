/*

�㷨��  

��������   ����һ����������п�����  ������ѡ����Ҫ�����
������֦   ��ǰ�ж�

ȫ�������⣺ 3������ȫ����

�����㷨�� ������ֲ�   ÿ�㿼�ǿ�����

___ ___ ___ ___ ... ___ ___   n����  ��������1-n  ���ظ�

��һ���գ�       1   2   3   4   5   ....   n
�ڶ����գ�       1   2   3   4   5   ....   n
�������գ�       1   2   3   4   5   ....   n
.....
�� n���գ�       1   2   3   4   5   ....   n


��ϰ��   ����n m     1->n������ѡm��  �����ظ�  �����з���

��1��ѡ˭         1                2            3      ... n
��2��ѡ˭     1 2 3 ... n
....
��m��ѡ˭     1 2 3 ... n
*/
#include<iostream>
using namespace std;

const int N = 105;
int a[N];
int n, m;

void show()
{
  for(int i = 1; i <= m; i++)
    cout << a[i] << ' ';
  cout << endl;
}

bool check()
{
  //	���˳��
  for(int i = 1; i < m; i++)
    if(a[i] > a[i + 1])
      return false;
  return true;
}

void search(int t)
{
  if(t > m){
    //	a[1 ... m]
    if(check())
      show();
    return;
  }
  for(int i = 1; i <= n; i++){
    
    //	a[1 ... t-1]  ������i
    bool flag = true;
    for(int j = 1; j < t; j++)
      if(a[j] == i){
        flag = false;
        break;
      }
    if(!flag) continue;
    
    a[t] = i;
    search(t + 1);
  }
}

int main()
{
  cin >> n >> m;
  
  search(1);
  
  return 0;
}
