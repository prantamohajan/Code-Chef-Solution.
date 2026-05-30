#include<bits/stdc++.h>
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while(t--){
                    int X , A, B;
                    cin >> X >> A >> B;
                    cout << (( A + B * 2) >= X? "Qualify\n" :  "NotQualify\n");
                    }
}