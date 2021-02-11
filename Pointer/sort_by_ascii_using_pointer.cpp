#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define MAX_STRING 255

int main(void){
	char name[MAX_STRING], temp;
	char *ptr = name;
	
	cin >> name;
	
	for(int i = 0; i < strlen(name)-1; i++){
		for(int j = i+1; j <= strlen(name)-1; j++){
			if(*(ptr + i) > *(ptr + j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	
	cout << name;
}

// from c language book
