//  Even or Odd Number Check
#include <stdio.h>

int main() {
    int num;

    // Asking user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
