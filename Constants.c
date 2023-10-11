#include<stdio.h>
int main()
{
    const float pi = 3.141;
    //pi = 4.121; This will given an error because we have now made the value constant.
    printf("The value of Pi: %.3f", pi);
    return 0;
}
/*
LESSON:
Constant represented by "const"
Constant assigns a fix value which can't be altered later during program execution!
*/