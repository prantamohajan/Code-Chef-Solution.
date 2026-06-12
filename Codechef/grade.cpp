#include <iostream>
using namespace std;
int main() {
    int t,m;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> m;
        string grade;
        if(m >= 80) grade = "A+";
        else if(m >= 75) grade = "A";
        else if(m >= 70) grade = "A-";
        else if(m >= 65) grade = "B+";
        else if(m >= 60) grade = "B";
        else if(m >= 55) grade = "B-";
        else if(m >= 50) grade = "C";
        else if(m >= 45) grade = "D";
        else grade = "F";
        cout << "Case " << i << ": " << grade << endl;
    }
    return 0;
}


