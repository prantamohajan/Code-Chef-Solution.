//Even sum

#include <stdio.h>
int main() {
          int n, sum = 0, i = 2;
          scanf("%d", &n);
          while (i <= n) {
                    sum += i;
                    i += 2;
          }
          printf("%d", sum);
          return 0;
}