//adding numbers with function- with agruments and with return value
#include <stdio.h>

// Function declaration
int add(int num1, int num2);

int main() {
    int num1, num2, result;

    // Input first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to add the numbers
    result = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int num1, int num2) {
    return num1 + num2;
}
