//Print Specific Numbers - MCQ
#include <stdio.h>

int main() {
          int x = 1;
          while (x <= 10) {
                    if (x % 2 == 0) {
                              printf("%d ", x);
                    }
                    x++;
          }
          return 0;
}