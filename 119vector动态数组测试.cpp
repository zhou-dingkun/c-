#include<iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int>a;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	int i = 0;
	while (a.size() != 1) {
		i += 2;
		i = i % a.size();
		a.erase(a.begin() + i);
		
	}
	cout << a[0];
}
