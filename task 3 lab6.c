#include <stdio.h>

int main() {
    int correct_pin = 5678;   
    int pin;         
    int attempts = 0;         

    while (attempts < 3) {
        printf("Enter your 4-digit PIN(0000-9999): ");
        scanf("%d", &pin);
        if (pin == correct_pin) 
        {
            printf("PIN correct. Access granted.\n");
            return 0; 
        } else {
            attempts= attempts+1; 
            printf("Incorrect PIN. You have %d attempt(s) left.\n", 3-attempts);
        }
    }
    printf("Your card is blocked. Please contact your bank.\n");

    return 0;
}