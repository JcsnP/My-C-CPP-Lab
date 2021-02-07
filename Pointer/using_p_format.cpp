#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int data = 10;
	int *ptr = &data;           // pointer
	
	printf("%p\n", ptr);        // 0061FF08
	cout << ptr;                // 0x61ff08
}
