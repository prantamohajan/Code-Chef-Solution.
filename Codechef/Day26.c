// Temperature Classifier

#include <stdio.h>

int main() {
          int temperature;
          printf("Enter the temperature in Celsius: ");
          scanf("%d", &temperature);
          if (temperature < 0) {
                    printf("It's freezing cold!");
          } else if (temperature >= 0 && temperature <= 20) {
                    printf("It's a bit chilly.");
          } else if (temperature > 20 && temperature <= 30) {
                    printf("It's a pleasant day.");
          } else {
                    printf("It's quite warm!");
          }
          return 0;
}