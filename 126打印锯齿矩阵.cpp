#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
    vector <int> a[m + 1];
    int z1[n + 1], z2[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> z2[i] >> z1[i];
        a[z2[i]].push_back(z1[i]);
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
