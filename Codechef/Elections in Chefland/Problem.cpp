#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int N, X, count = 0;
        cin >> N >> X;
        
        while(N--) {
            int age;
            cin >> age;
            if(age >= X) count++;
        }
        cout << count << '\n';
    }
    return 0;
}
