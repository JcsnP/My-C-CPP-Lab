#include <stdio.h>
#include <conio.h>

void usingPointer(){
	char name[20];
	char *ptr_name = name;
	
	gets(name);
	puts(ptr_name);
}

int main(){
	char name[20];
	
	//input string in line (don't care spacebar)
	gets(name);
	
	//display string, put address of string into puts(), but don't care about it array of char is already an address 📬
	puts(name);
	
	//call usingPointer function
	usingPointer();
}
