#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n % 3 == 0)
            cout << n << " is a multiple of 3" << endl;
        else
            cout << n << " is not a multiple of 3" << endl;
    }
    return 0;
}
