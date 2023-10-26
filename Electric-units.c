// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int units;
    int bill;
    printf("Enter your Electric Units:");
    scanf("%i", &units);
    if(units <= 50){
        printf("\nYour Units are below 50.");
        bill = units*0.5 + 20%units;
        printf("\nYour Monthly Bill is %i",bill);
    }
    else if(units <= 100){
        printf("\nYour Units are below 100.");
        bill = units*0.75 + 20%units;
        printf("\nYour Monthly Bill is %i", bill);
    }
    else if(units <= 200){
        printf("\nYour Units are below 200.");
        bill = units*1.20 + 20%units;
        printf("\nYour Monthly Bill is %i", bill);
    }
    else if(units >= 250){
        printf("\nYour Units are above 250.");
        bill = units*1.50 + 20%units;
        printf("\nYour Monthly Bill is %i", bill);
    }
    else{
        printf("Please Enter Valid Value");
    }
    return 0;
}
