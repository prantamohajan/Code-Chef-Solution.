/// Triangle Type screen shot

#include <stdio.h>
int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral");
    }
    // Check if the triangle is isosceles
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles");
    }
    // If none of the above conditions are met, the triangle is scalene
    else {
        printf("Scalene");
    }
    return 0;
}