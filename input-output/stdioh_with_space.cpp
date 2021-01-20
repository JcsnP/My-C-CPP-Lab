#include <stdio.h>

int main(){
	int a,b;
	char c;
	
	printf("Please input a, b, c: ");
	scanf("%d%d%c", &a, &b, &c);
	
	printf("%d %d %c\n", a,b,c);
	
	//	result will not show c because it's sensitive with spacebar
	
	
	//SOLUTION
	printf("Please input a, b, c");
	scanf("%d %d %c", &a, &b, &c);
	
	printf("%d %d %c\n", a, b, c);
}
