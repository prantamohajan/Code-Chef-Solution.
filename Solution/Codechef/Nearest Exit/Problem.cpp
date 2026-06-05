#include<bits/stdc++.h>
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t;
          cin >> t;
          while(t--){
                    int X;
                    cin >> X ;
                    if(X <= 50 && X <= 100) cout <<"LEFT\n";
                    else cout << "RIGHT\n";
          } 
}