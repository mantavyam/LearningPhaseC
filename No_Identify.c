// C Program to find number type + - or 0
#include <stdio.h>

int main() {

    int number;
    printf("Please Enter the Number:");
    scanf("%i", &number);
    if(number > 0){
        printf("%i is a Positive Number", number);
    }
    else if (number < 0){
        printf("%i is a Negative Number", number);
    }
    else if (number == 0){
        printf("%i is zero", number);
    }
    else{
        printf("Please Enter Valid Value");
    }

    return 0;
}
