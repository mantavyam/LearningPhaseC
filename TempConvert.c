#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;
    printf("\n Is the Temp in C or F? :");
    scanf("%s", &unit);
    unit = toupper(unit);
    if(unit == 'F'){
        printf("The temp is in F");
        printf("\nEnter the Value of Temp:");
        scanf("%.1f", &temp);
    }
    else if(unit == 'C'){
        printf("The temp is in C");
        printf("\nEnter the Value of Temp:");
        scanf("%.1f", &temp);
    }
    else{
        printf("%c is not a valid unit",unit);
    } 
}
