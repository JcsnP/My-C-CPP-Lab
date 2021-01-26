#include <iostream>
#include <cstring>
using namespace std;

void StringtoUpper(char str[]){
	for(int i = 0; i < strlen(str); i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}
	}
}
