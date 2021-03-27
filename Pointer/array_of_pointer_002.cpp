#include <iostream>
using namespace std;

// using array of pointer

int main(){
	int array[5] = {1,2,3,4,5}; // normal array
	int *pointer[5]; // array of pointer
	
	// assign each element of pointer with for loop
	for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
		pointer[i] = &array[i];
	}
	
	// show all element in array of pointer
	for(int i = 0; i < sizeof(pointer) / sizeof(pointer[0]); i++){
		cout << "Data[" << i+1 << "]\t" << "Address: " << pointer[i] <<"\t" << "Data: " << *pointer[i] << endl;
	}
}

/* OUTPUT
Data[1] Address: 0x61fee4       Data: 1
Data[2] Address: 0x61fee8       Data: 2
Data[3] Address: 0x61feec       Data: 3
Data[4] Address: 0x61fef0       Data: 4
Data[5] Address: 0x61fef4       Data: 5
*/
