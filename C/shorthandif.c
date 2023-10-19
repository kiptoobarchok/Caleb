#include <stdio.h>

//use ternary operator in place of if else statement

/**ie 
  int main ()
  {
      int time = 19

      if (time < 18 )
      { 
          printf("It is morning/daytime");
      }
      else 
      {
      printf("It is evening/nighttime");
      }
      return 0;
   }
  */

int main ()
{
	int time = 18;
	
	(time < 18) ? printf("it is morning/daytime\n") : printf("it is evening/nighttime\n");
	return 0;
}
