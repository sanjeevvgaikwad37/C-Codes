
#include <stdio.h>

int main() {
    int number;

    // Get the number from the user
    printf("Enter the number whose multiplication table you want to generate: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", number);
    printf("%d x 1 = %d\n", number, number * 1);
    printf("%d x 2 = %d\n", number, number * 2);
    printf("%d x 3 = %d\n", number, number * 3);
    printf("%d x 4 = %d\n", number, number * 4);
    printf("%d x 5 = %d\n", number, number * 5);
    printf("%d x 6 = %d\n", number, number * 6);
    printf("%d x 7 = %d\n", number, number * 7);
    printf("%d x 8 = %d\n", number, number * 8);
    printf("%d x 9 = %d\n", number, number * 9);
    printf("%d x 10 = %d\n", number, number * 10);

    return 0;
}
