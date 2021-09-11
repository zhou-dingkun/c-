#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    freopen("rect.in", "r", stdin);
    freopen("rect.out", "w", stdout);
    long long int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << char('A' + j + i - 2);
        }
        for (int j = 1; j <= m - i + 1; j++) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}

