#include<bits/stdc++.h>
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >>t;
          while(t--){
                    int x;
                    cin >> x >>y >>z;
                    if (2 * z > x *y)cout << "yes"<<"\n";
                    else cout << "no" <<"\n";
          }
          return 0;
}