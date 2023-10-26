// C Program to find angle compatibility
#include <stdio.h>

int main() {

    int angle1, angle2, angle3;
    printf("Please Enter Angle 1:");
    scanf("%i", &angle1);
    printf("Please Enter Angle 2:");
    scanf("%i", &angle2);
    printf("Please Enter Angle 3:");
    scanf("%i", &angle3);
    if(angle1 + angle2 + angle3 == 180){
        printf("Yes this triangle is Possible");
    }
    else{
        printf("No, this triangle is not Possible");
    }

    return 0;
}
