#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    printf("Count of each note:\n");

    if (amount >= 100) {
        notes = amount / 100;
        printf("%d x 100 notes\n", notes);
        amount = amount % 100;
    }

    if (amount >= 50) {
        notes = amount / 50;
        printf("%d x 50 notes\n", notes);
        amount = amount % 50;
    }

    if (amount >= 20) {
        notes = amount / 20;
        printf("%d x 20 notes\n", notes);
        amount = amount % 20;
    }

    if (amount >= 10) {
        notes = amount / 10;
        printf("%d x 10 notes\n", notes);
        amount = amount % 10;
    }

    if (amount >= 5) {
        notes = amount / 5;
        printf("%d x 5 notes\n", notes);
        amount = amount % 5;
    }

    if (amount >= 1) {
        notes = amount;
        printf("%d x 1 notes\n", notes);
    }

    return 0;
}