#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int lucky = 0;
    int unlucky = 0;

    for (int i = 0; i < n; i++) {
        int T;
        cin >> T;
        
        if (T % 2 == 0) {
            lucky++; // 
        } else {
            unlucky++; 
        }
    }
    cout << (lucky > unlucky ? "READY FOR BATTLE\n" : "NOT READY\n");

    return 0;
}