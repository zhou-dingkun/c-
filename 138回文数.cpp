#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a;
	cin >> a;
	if (a.length() % 2 == 0) {
		string b = a.substr(a.length() / 2,a.length() / 2);
		a.erase(a.length() / 2);
		if (a == reverse(b.begin(),b.end())) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	else {
		string b = a.substr((a.length()+1) / 2, a.length() / 2);
		a.erase(a.length() / 2);
		if (a == reverse(b.begin(),b.end())) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}