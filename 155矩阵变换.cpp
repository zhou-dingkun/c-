#include<iostream>
using namespace std;

const int N = 105;
int a[N][N];
int n, m;
char op;

void init() {
	int num = 1;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			a[i][j] = num++;
}

void show() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
}

void top() {
	int temp[2][105];
	for(int i=1; i<=n; i++) {
		temp[1][i]=a[1][i];
	}
	for(int i = 1; i < n; i++) {
		for(int j = 1; j <= n; j++) {
			a[i][j] = a[i + 1][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		a[n][i]=temp[1][i];
	}
}

void left() {
	int temp[105][2];
	for(int i=1; i<=n; i++) {
		temp[i][1]=a[i][1];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j < n; j++) {
			a[i][j] = a[i][j + 1];
		}
	}
	for(int i = 1; i <= n; i++) {
		a[i][n]=temp[i][1];
	}
}

void reverse() {
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= i; j++)
			swap(a[i][j], a[j][i]);
}

int main() {
	cin >> n >> m;

	init();

	for(int i = 0; i < m; i++) {
		cin >> op;
		switch(op) {
			case 't':
				top();
				break;
			case 'l':
				left();
				break;
			case 'r':
				reverse();
				break;
		}
	}

	show();
	return 0;
}
