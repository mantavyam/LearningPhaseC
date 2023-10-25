// C Program to Check Number is Even or Odd
#include <stdio.h>

int main() {
    int number; 
    printf("Enter the number:");
    scanf("%i",&number);
    //Dividing by 2 gives remainder 0
    if((number % 2 == 0)){
        printf("This Number is Even");
    }
    else{
        printf("This Number is Odd");
    }

    return 0;
}
