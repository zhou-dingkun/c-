#include<iostream>
using namespace std;

void replace();

int a[1001]= {0};
int ans=0;
int m,n;
int x;

int main() {
	int i;

	cin>>m>>n;//�ڴ����� ���³���
	for(i=1; i<=n; i++) { //����
		cin>>x;//���뵥��
		if(a[x]==0&&ans<m) { //��Ҫ�������ڴ�δ��
			ans++;//���Ҵ���+1
			a[x]=ans;//�洢ans��Ͱ�ŵ�˼��
		} else //���ڴ�����
			replace();//���ú���
	}
	cout<<ans<<endl;
	return 0;
}
void replace() {
	int sum;
	int i;

	if(a[x]==0&&ans>=m) { //��Ҫ�����ڴ�����
		ans++;
		sum=0;
		for(i=0; i<=1000; i++) {
			if(a[i]>=1) { //ÿ�����ʴ���˳����ǰ�ƶ�һλ
				a[i]=a[i]-1;
				sum++;
			}
			if(sum==m)//�ƶ��������ѭ��
				break;
		}
		if(m>0)//���ڴ����������µ���
			a[x]=m;
	}
}

