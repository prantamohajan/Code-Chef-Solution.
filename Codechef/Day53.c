// Age Group Identifier.

#include <stdio.h>

int main() {
          int age;
          printf("Enter your age: ");
          scanf("%d", &age);
          if (age < 18) {
                    printf("You are in the child age group.\n");
          } else if (age < 60) {
                    printf("You are in the adult age group.\n");
          } else {
                    printf("You are in the senior age group.\n");
          }
          return 0;
}