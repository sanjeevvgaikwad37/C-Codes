#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to the Interactive Menu!\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. View Profile\n");
        printf("2. Send Message\n");
        printf("3. Settings\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Displaying profile...\n");
                break;
            case 2:
                printf("Sending message...\n");
                break;
            case 3:
                printf("Opening settings...\n");
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
