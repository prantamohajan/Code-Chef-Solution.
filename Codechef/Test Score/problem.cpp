#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll N , X , Y;
        cin >> N >> X >> Y;
        cout << (Y % X == 0 && Y/ X <= N ? "YES\n" : "NO\n");
    }
    return 0;
}