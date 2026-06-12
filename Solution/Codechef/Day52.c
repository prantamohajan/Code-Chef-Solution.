//Sum of Digit

#include <stdio.h>
int main() {
          int n;
          scanf("%d", &n);
          int digit_sum = 0;
          while(n > 0) {
                    digit_sum += n % 10;
                    n /= 10;
          }
          printf("%d", digit_sum);
}