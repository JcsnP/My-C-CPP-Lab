#include <iostream>
#include "library.h"
using namespace std;

int main(){
	char name[] = "Chitsanupong";
	
	StringtoUpper(name);
	
	int i = 0;
	while(name[i]){
		cout << name[i];
		++i;
	}
	
	// return
	return 0;
}
