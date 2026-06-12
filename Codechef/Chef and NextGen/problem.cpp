#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while(t--){
                    ll A, B, X, Y;
                    cin >> A >> B >> X >> Y;
                    cout << (A * B <= X * Y ? "Yes\n":"No\n");
          }
          return 0;
}