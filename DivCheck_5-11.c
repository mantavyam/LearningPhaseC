// C Program to find number divisibility by 5 and 11
#include <stdio.h>

int main() {

    int number;
    printf("Please Enter the Number:");
    scanf("%i", &number);
    if(number % 5 ==0 && number % 11 == 0){
        printf("Yes, %i is divisible by both 5 and 11", number);
    }
/*    else if (number < 0){
        printf("%i is a Negative Number", number);
    }
    else if (number == 0){
        printf("%i is zero", number);
    }
*/
    else{
        printf("No it is not divisible by both numbers");
    }

    return 0;
}
