// Program to Use If, Else and Else If
// Check Eligibility for Bank Account Opening
#include <stdio.h>

int main() {
    int age;
    printf("Enter Your Age:");
    scanf("%i", &age);
    if(age >= 18){
        printf("You are Eligible!");
    }
    // You can add multiple else if between if and else; Also try using switch and break instead!
    else if(age < 0){
        printf("Not Born Yet?");
    }
    // NOTE: Don't mention conditions in Else
    else{
        printf("You're too Young, Grow Up!");
    }
    return 0;
}
