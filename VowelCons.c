#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase alphabet.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}