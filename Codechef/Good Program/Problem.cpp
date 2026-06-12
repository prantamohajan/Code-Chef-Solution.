#include<bits/stdc++.h>
using namespace std;

int main (){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
          int t;
          cin >> t;
          while(t--){
                    int N;
                    cin >> N;
                    cout << ((N % 4 == 0 ? "GOOD\n" : "NOT GOOD\n"));
          }
          return 0;
}