//Chef defines a pair of positive integers  ( a , b ) (a,b) to be a  Oneful Pair Oneful Pair, if  a + b + ( a ⋅ b ) = 111 a+b+(a⋅b)=111

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a + b + (a * b) == 111) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
in == 1 55 yes 

out == 1 56 no