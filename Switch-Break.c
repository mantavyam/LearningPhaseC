// Program to Use Switch, Case, break, default
#include <stdio.h>
int main() {
    char Grade;
    printf("Enter Grades to Check Status:");
    scanf("%c",&Grade);
    switch(Grade){
        // We can add Multiple Cases         
        case 'A':
           printf("Brilliant");
           break;
        case 'B':
           printf("Excellent");
           break;
        case 'C':
           printf("Good One");
           break;
        case 'D':
           printf("Nice");
           break;
        case 'E':
           printf("It's Okay");
           break;
        // Default Statements are used for Outputs Other than defined Cases
        default:   
           printf("Enter Correct Grades!");
    }
    return 0;
}
