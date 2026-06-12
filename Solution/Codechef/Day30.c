//Pass-Fail Checker

#include <stdio.h>
int main() {
          int marks;
          printf("Enter your marks: ");
          scanf("%d", & marks);
          if (marks >= 50) {
                    printf("You passed!\n");
          } else {
                    printf("You failed.\n");
          }
          return 0;
}
