#include <stdio.h>

//Calling a Function

/*void masterClass()
{
  bool status;
  printf("Have you registered for Course? (0/1)");
  scanf("%i",status);
}
*/
int main()
{
  //masterClass();
  int status;
  printf("Have you registered for Course? (0/1)");
  scanf("%i",status);
  if(status == 0){
    printf("Welcome to the Game Dev Masterclass!");
  }
  else{
    printf("Quickly Register, Ltd Seats!");
  }
  return 0;
}