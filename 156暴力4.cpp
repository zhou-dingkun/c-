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
bool used[N];	//	used[i]: true   i�ù��� 
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
    //	��֦
    if(used[i]) continue;
    
    //	����ǰ��  ����  ��״̬ ....
    a[t] = i;
    used[i] = true;
    
    search(t + 1);
    
    //	��ԭ  ����ǰ������ʲô  ������߾ͻ�ԭʲô
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
