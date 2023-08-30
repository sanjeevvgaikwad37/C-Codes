#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int countdown = 10; // Set the initial countdown value
    
    printf("Countdown started!\n");
    
    while (countdown >= 0) {
        printf("Time remaining is: %d seconds\n", countdown);
        sleep(1); // Simulate the passage for 1 second
        countdown--;
    }
    
    printf("Time's up!\n");
    
    return 0;
}
