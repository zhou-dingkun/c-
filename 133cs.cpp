#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 1) {
		int a[n];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		int s[n + 1];
		int t = 1;
		for (int i = 1; i < n; i++) {
			if (a[i] == a[i + 1]) {
				int temp = i;
				for (int j = i; j < n; j++) {
					if (a[j] != a[j + 1]) {
						s[t] = j - i ;
						t++;
					}
				}
			}
		}
		for (int j =1; j <= t; j++) {
			cout<<s[j]<<endl;
		}
		int max = 0;
		for (int i = 1; i <= t; i++) {
			if (max <= s[i]) {
				max = s[i];
			}
		}
		cout << max << endl;
	} else {
		int zz;
		cin>>zz;
		cout << '1' << endl;
	}

}
