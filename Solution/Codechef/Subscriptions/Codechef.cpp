#include <bits/stdc++.h>
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
          int t;
          cin >> t;
          while (t--){
                    int N,X;
                    cin >> N >> X;
                    int sub = (N + 5)/6;
                    cout <<( sub * X) <<"\n";
          }
          return 0;
}