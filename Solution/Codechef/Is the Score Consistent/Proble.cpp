#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while (t--) {
                    int A,B,C,D;
                    cin >> A >> B >> C >> D ;
                    cout <<(C >= A && D >= B  ? "POSSIBLE" :  "IMPOSSIBLE" ) << "\n";
          }
          return 0;
}
