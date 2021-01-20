#include <stdio.h>

void get(){
	char c;
	do {
		c = getchar();
		putchar(c);
	} while(c != 'E' or c != 'e');
}

int main(){
	//getchar use for input a character (single) like a printf and scanf
	
	char grade;
	grade = getchar();
	putchar(grade);
	
	get();
}
