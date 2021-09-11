#include<iostream>
using namespace std;
int sfss(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 2;
	}
	return 3;
}

int main() {
	int s, g, dh, sum = 0;
	for (int i = 10; i < 99; i++) {
		s = i / 10;
		g = i % 10;
		dh = 10 * g + s;
		if (sfss(i) == 3 && sfss(dh) == 3){
			cout << i << endl;
		sum++;}
	}
	cout << sum << endl;
}
