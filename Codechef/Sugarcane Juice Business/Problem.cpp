#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while(t--){
                    ll N;
                    cin >> N;
                    cout << ( (N << 4)-N ) <<"\n";
          }
          return 0;
}