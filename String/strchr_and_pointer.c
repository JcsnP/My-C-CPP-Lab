#include <stdio.h>
#include <string.h>

int main(){
	char website[] = "pornhub.com";
	char *ptr01 = strchr(website, 'p');
	char *ptr02 = strchr(website, 'o');
	
	printf("address of ptr01: %d\n", ptr01);
	printf("address of ptr02: %d\n", ptr02);
	printf("ptr02 - ptr01 = %d", ptr02 - ptr01);
}
