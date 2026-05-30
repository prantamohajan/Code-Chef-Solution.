#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while (t--){
                    int n , x;
                    cin >> n >> x;
                    int need = max(0, n - x);
                    int paket = (need + 3) / 4;
                    cout << paket << "\n";
          }return 0;
}