#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if (x % 3 == 0) {
            cout << "NORMAL\n";
        } else if (x % 3 == 1) {
            cout << "HUGE\n";
        } else {
            cout << "SMALL\n";
        }
    }
    return 0;
}