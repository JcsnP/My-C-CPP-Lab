#include <iostream>
using namespace std;

int main(){
	char name[30] = "Chitsanupong";
	
	char *ptr = name;
	
	for(int i = 0;ptr[i];++i){
		cout << ptr[i];
	}
}
