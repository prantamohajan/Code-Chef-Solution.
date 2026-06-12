// Given an integer N, Calculate and print the sum and product of its digit.

//Solution.
#include <iostream>
using namespace std;
int main() {
          int n;
          cin >> n;
          int sum = 0;
          int product = 1;
          while (n > 0) {
                    int lastDigit = n % 10;     // Get the last digit
                    sum = sum + lastDigit;                  // Add digit to sum
                    product = product * lastDigit; // Multiply digit to product

                    n = n / 10;               // Remove the last digit
}
cout << sum << " " << product;
return 0;
}