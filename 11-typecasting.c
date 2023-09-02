#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables of different data types
    float floatingPointNumber = 3.14;
    int integerNumber;

    // Perform type casting from float to int
    integerNumber = (int)floatingPointNumber;

    // Print the original float and the type-casted int
    printf("Original floating-point number: %f\n", floatingPointNumber);
    printf("Type-casted integer: %d\n", integerNumber);

    return 0;
}
