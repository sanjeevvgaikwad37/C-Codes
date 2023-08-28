#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice (1 for Maths, 2 for Science, 3 for both): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Congratulations! You passed Maths and won 15 rupees.\n");
    } else if (choice == 2) {
        printf("Congratulations! You passed Science and won 15 rupees.\n");
    } else if (choice == 3) {
        printf("Congratulations! You cleared both subjects and won 45 rupees.\n");
    } else {
        printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}
