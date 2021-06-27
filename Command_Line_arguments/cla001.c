#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
	if(argc == 1){
		printf("Please run program with command line arguments\n");
	}else{
		printf("argc[0] is \"%s\"\n", argv[0]);
		for(i = 1; i < argc; i++){
			printf("argc[%d] = %s\n", i, argv[i]);
		}		
	}
	
	return 0;
}


/*INPUT
cla001 a b c
*/

/*OUTPUT
argc[0] is "cla001"
argc[1] = a
argc[2] = b
argc[3] = c
*/
