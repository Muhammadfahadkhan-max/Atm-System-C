#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int loggedIn = 0;
    char pin[10];
    char correctPin[] = "1234";
    float balance = 5000;

    while (1) {
        printf("\n===== ATM SYSTEM =====\n");

        if (!loggedIn) {
            printf("1. Login\n2. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter PIN: ");
                scanf("%s", pin);

                if (strcmp(pin, correctPin) == 0) {
                    printf("Login successful!\n");
                    loggedIn = 1;
                } else {
                    printf("Wrong PIN!\n");
                }
            } 
            else if (choice == 2) {
                printf("Goodbye!\n");
                break;
            } 
            else {
                printf("Invalid choice!\n");
            }
        } 
        else {
            printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Logout\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Your Balance: %.2f\n", balance);
            } 
            else if (choice == 2) {
                float amount;
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful!\n");
                } else {
                    printf("Invalid amount!\n");
                }
            } 
            else if (choice == 3) {
                float amount;
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                }
            } 
            else if (choice == 4) {
                loggedIn = 0;
                printf("Logged out successfully!\n");
            } 
            else {
                printf("Invalid choice!\n");
            }
        }
    }

    return 0;
}
