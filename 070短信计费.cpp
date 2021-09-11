#include<iostream>
#include<iomanip>
using namespace std;
int n[100];
double jf(int a);
int main() {
	int n, ls;
	double jg = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ls; 
		jg += jf(ls);
	}
	cout << fixed << setprecision(1) << jg << endl;
}
double jf(int a) {
	double fh;
	if (a % 70 == 0) {
		fh = 0.1 * (a / 70);
	}
	else {
		fh = 0.1 * (a / 70 + 1);
	}
	return fh;

}/*ÑùÀýÊäÈë£º
39
49
42
61
44
147
42
72
35 
46
*/ 
 
