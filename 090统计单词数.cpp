#include<iostream>
using namespace std;
int sum = 0;
int main() {
    int m, n;
    int l, l2, cnt = 0, first = 0;
    cin >> m >> n;
    int nc[m];
    int a[n];
    int ncws = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int pd = 'f';
        for (int i = 0; i < m; i++) {
            if (nc[i] == a) {
                pd = 't';
            }
        }
        if (pd == 'f' && ncws <= m) {

            nc[ncws] = a[i];
            ncws++;
            sum++;
        }
        else {
            if (ncws > m) {
                for (int i = 1; i < m; i++) {
                    nc[i - 1] = nc[i];
                }
                nc[m - 1] = 0;
            }
            else {
            }
        }
    }
    cout << sum << endl;
}