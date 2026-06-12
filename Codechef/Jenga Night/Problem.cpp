#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll  X , Y;
        cin  >> X >> Y;
        cout << ( Y % X == 0 ? "YES\n" : "NO\n");
    }
    return 0;
}

