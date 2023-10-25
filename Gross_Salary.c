// C Program to Calculate Gross Salary
#include <stdio.h>
#import <math.h>

int main() {
    int Basic_Salary, Gross_Salary;
    printf("What is Your Basic Salary?:");
    scanf("%i",&Basic_Salary);
    if(Basic_Salary >= 10000 && Basic_Salary <= 19999){
        printf("HRA:20% & DA:80%");
        Gross_Salary = Basic_Salary + 20%Basic_Salary + 80%Basic_Salary;
        printf("\nYour Gross Salary is %i", Gross_Salary);
    }
    else if(Basic_Salary >= 20000 && Basic_Salary <= 29999){
        printf("HRA:25% & DA:90%");
        Gross_Salary = Basic_Salary + 25%Basic_Salary + 90%Basic_Salary;
        printf("\nYour Gross Salary is %i", Gross_Salary);
    }
    else if(Basic_Salary >= 30000){
        printf("HRA:30% & DA:95%");
        Gross_Salary = Basic_Salary + 30%Basic_Salary + 95%Basic_Salary;
        printf("\nYour Gross Salary is %i", Gross_Salary);
    }
    else{
        printf("Please Enter Valid Value");
    }
    
    return 0;
}
