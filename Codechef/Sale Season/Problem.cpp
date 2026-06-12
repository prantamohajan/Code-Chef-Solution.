#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x <= 100) {
            cout << x << "\n";
        }
        else if(x > 100 && x <= 1000) {
            cout << (x - 25) << "\n";
        }
        else if(x > 1000 && x <= 5000) {
            cout << (x - 100) << "\n";
        }
        else {
            cout << (x - 500) << "\n";
        }
    }
    return 0;
}