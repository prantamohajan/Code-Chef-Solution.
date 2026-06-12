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

        int tough_problems_count = 0; 
        
        for (int i = 0; i < N; i++){
            ll d;
            cin >> d;
            if (d >= 1000) {
                tough_problems_count++;
            }
        }
        cout << tough_problems_count << "\n";
    }
    return 0;
}