#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a;
int main()
{
	cin >> a;
	int temp;
	vector <int> ph;
	vector <bool> pd;
	for (int i = 0; i < a; i++) {
		cin >>temp;
		pd.push_back(1);
		ph.push_back(temp);
	}
	sort(ph.begin(),ph.end());
	for (int i = 0; i < a; i++) {
		if (ph[i] == ph[i + 1]) {
			pd[i] = 0;
			pd[i + 1] = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i < a; i++) {
		if (pd[i]==1) {
			sum++;
		}
	}
	cout << sum << endl;
}
