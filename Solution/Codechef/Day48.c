//Sum of First Few Integers - MCQ

#include <stdio.h>
int main() {
    int num = 1, sum = 0;
    while (num <= 5) {
        sum += num;
        num++;
    }
    printf("%d", sum);
    return 0;
}