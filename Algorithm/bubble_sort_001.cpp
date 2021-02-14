#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define MAX_STRING 255

void bubble_sort(int arr[], int number){
	int i, j, temp;
	
	for(i = 0; i < number; i++){
		for(j = i + 1; j < number; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << endl;
}

int main(void){
	int arr[6] = {5,3,4,6,2,7};
	
	bubble_sort(arr, 6);
	
	for(const int i: arr){
		cout << "[" << i << "]\t";
	}
	cout << endl;
}
