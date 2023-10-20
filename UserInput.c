// Program in C to accept UserInput
#include <stdio.h>

int main() {
    // Variable Datatype define
    int Age, Revenue;
    char Name[10], Company_Name[10];
    // Asking User for Input to our variables
    printf("Mention your Name:");
    scanf("%s", &Name);
    printf("Mention your Company Name:");
    scanf("%s", &Company_Name);
    printf("Mention your Age:");
    scanf("%i", &Age);
    ("Mention your Revenue:");
    scanf("%i", &Revenue);
    // Display of our Variable Values
    printf("\nProfile: %s",Name);
    printf("\nCurrent Age: %i",Age);
    printf("\nFounder of %s", Company_Name);
    printf("\nRevenue Generated: %i",Revenue);

    return 0;
}
