#include<iostream>
#include<windows.h>
using namespace std;
enum fx {
    _up=0, 
    _down=1,
    _left=2,
    _right=3,
};
int bg[1001][1001];
int n,x,y,fx;
int main() {
	system("title  111ȡ����ö�٣�");
	cout<<"��7.6  ȡ������һ��N*N�Ķ�ά����ÿ��������1�����������ڸ�����ʼ��λ�ã�x,y���ͷ����ϡ��¡�����֮һ����һֱ�ƶ�������ı߽磬�����ƶ���������·�ϸ���������ֺ͡������ʽ�� 1�У�4����������1������N����Χ��[1��1000]����2,3�������ǿ�ʼλ�õ�����X��Y����ʾ�ڵ�X��Y�У����1��N������4������D��ʾ����D=0��ʾ���ϣ�D=1��ʾ���£�D=2��ʾ����D=3��ʾ���ң�����N�У�ÿ��n����������Χ��[-1000��1000]��"<<endl;
	cout<<"����n��x��y��d"<<endl;
	cin>>n>>x>>y>>fx;
	cout<<"�����ά����"<<endl;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>bg[i][j];
		}
	}
	int sum;
	switch(fx){
		case _up:
			for(int i=x;i>0;i--){
				sum+=bg[i][y];
			}
			break;
		case _down:
			for(int i=x;i<=n;i++){
				sum+=bg[i][y];
			}
			break;
		case _left:
			for(int i=y;i>0;i--){
				sum+=bg[x][i];
			}
			break;
		case _right:
			for(int i=y;i<=n;i++){
				sum+=bg[x][i];
			}
			break;
	}
	cout<<"�ͣ�"<<endl; 
	cout<<sum<<endl;
}/*
4 2 3 2
1 2 3 4
5 9 8 7
8 2 7 4
6 6 3 8
*/
