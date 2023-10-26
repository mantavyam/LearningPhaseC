// C Program to find Leap Year
#include <stdio.h>

int main() {

    int year;
    printf("Please Enter the Year:");
    scanf("%i", &year);
    if(year % 4 == 0){
        printf("Yes, %i is a Leap Year", year);
    }
    else{
        printf("No, %i is not a Leap Year", year);
    }

    return 0;
}
