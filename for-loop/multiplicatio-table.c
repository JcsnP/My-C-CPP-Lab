#include <stdio.h>
#include <conio.h>

int main(){
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 12; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}
