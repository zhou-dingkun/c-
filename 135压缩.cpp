#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main() {
	string a;
	getline(cin, a);
	int pd[101] = {0};
	for (int i = 0; i < a.length(); i++) {
		int cs = 0;
		for (int j = 0; j <= i; j++) {
			if (a[i] == a[j]&&a[i]!=' ') {
				cs++;
				//cout << "有重复" << endl;
			}
		}
	//cout<<i << cs << endl;
		if (cs != 1) {
			if (cs != 3) {
				if (cs != 6) {
					pd[i] = 1;
				}
			}
		}
	}
	for (int i = 0; i < a.length(); i++) {
		if (pd[i] == 1) {

		}
		else {
			cout << a[i];
		}
	}
}