#include <bits/stdc++.h>
using namespace std;

int main() {
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
          int t;
          cin >> t;
          while(t--){
                    int X,Y;
                    cin >> X >> Y;
                    cout << ((Y << 1) >=X ? "Yes\n":"No\n");
          }
          return 0;
}