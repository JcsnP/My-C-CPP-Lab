#include <stdio.h>

int main(){
  printf("File: %s\n", __FILE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);
  printf("Line: %d\n", __LINE__);
  printf("ANSI: %d\n", __STDC__);
}

/*OUTPUT
File: c.c
Date: Apr  6 2021
Time: 18:29:45
Line: 10
ANSI: 1
*/
