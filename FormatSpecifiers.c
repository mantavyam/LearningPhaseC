#include<stdio.h>
int main()
{
    char company1[] = "Mantavyam";
    char company2[] = "Comrade:Future Officers";
    float revenue1 = 1000000000;
    int revenue2 = 20000000;
    printf("The revenue of %s is $%.2f\n", company1, revenue1);
    printf("The revenue of %s is $%i\n", company2, revenue2);
    return 0; 
    /*
    Format specifier % = defines and formats a type of data to be displayed

    %c = character
    %s = string (array of characters)
    %d or %i = integer 
    %f = float
    %lf = double
    
    %.1 = decimal precision for numbers
    %1 = minimum field width
    %- = left align
    */    
}