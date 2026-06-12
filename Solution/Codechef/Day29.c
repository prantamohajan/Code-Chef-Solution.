//Day-Of-Week Finder

#include <stdio.h>

int main() {
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    if (day >= 1) {
        if (day == 1) {
            printf("It's Monday!");
        } else if (day == 2) {
            printf("It's Wednesday!");
        } else if (day == 3) {
            printf("It's Friday!");
        } else if (day == 4) {
            printf("It's Sunday!");
        } else {
            printf("Invalid day number.");
        }
    } else {
        printf("Invalid day number.");
    }
    return 0;
}