// C Program to find grades
#include <stdio.h>

int main() {

    int total_marks, Phy, Chem, Bio, Comp, Maths;
    printf("Please Enter marks in Physics:");
    scanf("%i", &Phy);
    printf("Please Enter marks in Chemistry:");
    scanf("%i", &Chem);
    printf("Please Enter marks in Biology:");
    scanf("%i", &Bio);
    printf("Please Enter marks in Computer:");
    scanf("%i", &Comp);
    printf("Please Enter marks in Maths:");
    scanf("%i", &Maths);
    total_marks = Phy + Chem + Bio + Comp + Maths;
    if(total_marks >= 90){
        printf("You secured A Grade");
    }
    else if(total_marks >= 80){
        printf("You secured B Grade");
    }
    else if(total_marks >= 70){
        printf("You secured C Grade");
    }
    else if(total_marks >= 60){
        printf("You secured D Grade");
    }
    else if(total_marks >= 40){
        printf("You secured E Grade");
    }
    else if(total_marks < 40){
        printf("You secured F Grade");
    }
    else{
        printf("Please Enter Valid Values");
    }
    return 0;
}
