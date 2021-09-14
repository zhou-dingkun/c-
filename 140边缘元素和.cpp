#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[101][101] = {  };
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum = sum+a[1][i] + a[i][n]+ a[n][i]+ a[i][1];
	}
	sum = sum - a[n][1] - a[1][1] - a[1][n] - a[n][n];
	cout << sum << endl;
}
