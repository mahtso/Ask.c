#include <stdio.h>

/* Ask how the program is */

int main()

{
  // array to store string taken as input
  char good;
  char bad;

  // take user input
  printf("How are you doing today?\n");
  scanf("%c", &good);
  scanf("%c", &bad); 
  
  // print response
  if (good < bad) {
  printf("I am glad you are doing well.\n");
  }
  
  else if (bad < good) {
  printf("I am sorry you are not doing well.\n");
  }

  return 0;

}
