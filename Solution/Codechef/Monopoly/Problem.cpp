#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while(t--){
                    ll P,Q,R,S;
                    cin >> P >> Q >> R >> S;
                    ll sum = P + Q + R + S;
                    ll profit = max({P,Q,R,S});
                    cout << (profit > (sum - profit) ? "Yes\n": "No\n");
          }
}