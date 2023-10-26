// C Program to find greatest between 2 numbers
#include <stdio.h>

int main() {

    int num1, num2, num3;
    printf("Please Enter Number 1:");
    scanf("%i", &num1);
    printf("Please Enter Number 2:");
    scanf("%i", &num2);
    printf("Please Enter Number 3:");
    scanf("%i", &num3);
    if(num1 > num2 && num1 > num3){
        printf("First Number is Greater");
    }
    else if (num2 > num1 && num2 > num3){
        printf("Second Number is Greater");
    }
    else if (num3 > num1 && num3 > num2){
        printf("Third Number is Greater");
    }
    else{
        printf("No Value found greater");
    }

    return 0;
}
