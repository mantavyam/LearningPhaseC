// C Program to find greatest between 2 numbers
#include <stdio.h>

int main() {

    int num1, num2;
    printf("Please Enter Number 1:");
    scanf("%i", &num1);
    printf("Please Enter Number 2:");
    scanf("%i", &num2);
    if(num1 > num2){
        printf("First Number is Greater");
    }
    else if (num2 > num1){
        printf("Second Number is Greater");
    }
    else{
        printf("No Value found greater");
    }

    return 0;
}
