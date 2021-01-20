#include <stdio.h>

int main(){
	int a,b,c;
	
	scanf("%d %d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
}

/*  WARNING will show
warning: too many arguments for format [-Wformat-extra-args]
  scanf("%d %d", &a, &b, &c);
*/

/*  RESULT
10 20 30
10 20 0
*/
