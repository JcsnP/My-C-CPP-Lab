#include <stdio.h>
#include <string.h>


int main(){
	char website[] = "pornhub.com";
	char *ptr = strchr(website, '.');
	
	if(!ptr){
		printf("can't finf '.' in %s\n", website);
	}else{
		printf("looking for %c\n", *ptr);
		printf("Found at position %d\n", ptr - website);
	}
}
