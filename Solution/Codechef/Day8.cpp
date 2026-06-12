//Write a program that utilizes a while loop to print the squares of numbers from 1 to N.

//Solution
#include <iostream>
using namespace std;
int main() {
          int num = 1;
          int max;
          cin >> max;
          while (num <= max){
                    cout << num * num << " ";
                    num++;
          }
return 0;
}
//Sample input: 5
//Output: 1 4 9 16 25