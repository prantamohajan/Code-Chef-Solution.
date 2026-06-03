#include <bits/stdc++.h>
using namespace std;

int main() {
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
          int t;
          cin >> t;
          while(t--){
                    int B1,B2,B3;

                    cin >> B1>>B2>>B3;
                    int bottles = (B1 == 0)+(B2 == 0) +(B3 == 0);
                    cout<<(bottles >=2 ?"Water filling time\n":"Not now\n");
          }
          return 0;

}
