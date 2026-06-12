#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X;
        cin >> X;
        cout << ((X >= 1 && X <= 4) ? "YES" : "NO") << "\n";
    }
    return 0;
}
