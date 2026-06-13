#include <stdio.h>
#include <string.h>
#include "auth.h"

int login() {
    char pin[10];
    char correctPin[] = "1234";

    printf("Enter PIN: ");
    scanf("%s", pin);

    if (strcmp(pin, correctPin) == 0) {
        printf("Login successful!\n");
        return 1;
    } else {
        printf("Wrong PIN!\n");
        return 0;
    }
}
