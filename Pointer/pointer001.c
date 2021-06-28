#include <stdio.h>
#include <math.h>

int main(){
	int array[5] = {1,2,3,4,5};
	int *array_pointer = array, n;
	
	printf("=== first value is %d ===\n", *(array));
	printf("The order you want from now on: ");
	scanf("%d", &n);
	
	printf("value is %d", *(array + n));
	
	return 0;
}
