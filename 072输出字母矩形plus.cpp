#include <iostream>
using namespace std;
int main() {
    char a = 'A';
    int m,n;
	cin>>m>>n; 
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<a;
            a++;
        }
        a='A'+i; 
        cout << endl;
    }
    return 0;
}/*
#include <iostream>
using namespace std;
int main(){
    int m,n;
	cin>>m>>n; 
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<char('a'+i+j);
        }
        cout << endl;
    }
    return 0;
}
*/
