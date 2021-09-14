#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
    vector <string> a[m + 1];
    int z1;
    string z2;
    for (int i = 1; i <= n; i++) {
        cin >> z1>> z2;
        a[z1].push_back(z2);
    }
    for (int i = 1; i <= m; i++) {
        int l = a[i].size();
        if (l > 1) {
            sort(a[i].begin(), a[i].end());
        }
        cout << i << " " << l << " ";
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
