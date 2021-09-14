#include<iostream>
using namespace std;
struct tid {
	char type;
	union {
		char idc[18];
		long long qq;
	};

};
tid a[10001];
int n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].type;
		switch (a[i].type)
		{
		case'i':
			for (int j = 0; j < 18; j++) cin >> a[i].idc[j]; break;
		case'q':cin >> a[i].qq;
		}
	}
	long long sum = 0;
	int c = 0;
	int men = 0, women = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i].type == 'i') {
			cout << "ok" << endl;
			if ((a[i].idc[16] - '0') % 2) {
				men++;
			}
			else {
				women++;
			}
		}
		if (a[i].type == 'q') {
			sum += a[i].qq;
			c++;
		}
	}
	cout << men << ' ' << women << ' ' << sum / c << endl;
}