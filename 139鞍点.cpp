#include <iostream>
using namespace std;
int main() {
	int n, m,bj1,bj2,max,min;
	cin >> n >> m;
	int a[n+1][m+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	bj2 = 0;
	for (int i = 1; i <= m; i++) {
		max = a[i][1];
		for (int j = 1; j <= n; j++)
			if (a[i][j] >= max)  max = a[i][j];
		for (int j = 1; j <= n; j++) {
			bj1 = 0;
			if (a[i][j] == max) {
				for (int z = 0, bj1 = 1; z < m && bj1; z++)
					if (a[z][j] < max) bj1 = 0;
				if (bj1) {
					cout<<i<<' '<<j <<' '<<a[i][j]<<endl;
					bj2 = 1;
				}
			}
		}
	}
	if (!bj2)
		cout<<"-1"<<endl;
}
