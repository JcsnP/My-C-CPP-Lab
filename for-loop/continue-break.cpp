#include <stdio.h>
#include <conio.h>

int main(){
	int c = 0;
	
	for(int i = 0; i < 100; i++){
		if(i % 2 == 0){
			++c;
			continue;
		}else{
			printf("%d\n", i);
		}
		if(c == 20){
			break;
		}
	}
}
