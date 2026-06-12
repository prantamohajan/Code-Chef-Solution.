//Traffic Light Simulator

#include <stdio.h>
int main() {
    char signal;
    printf("Enter the traffic light signal (R/Y/G): ");
    scanf(" %c", &signal);

    if (signal == 'R') {
        printf("Stop! It's red signal.");
    } else if (signal == 'Y') {
        printf("Get ready to move. It's yellow signal.");
    } else if (signal == 'G') {
        printf("Go! It's green signal.");
    } else {
        printf("Invalid signal input.");
    }
    return 0;
}