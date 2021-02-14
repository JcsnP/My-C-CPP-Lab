/* JcsnP
* 📈 method 1
* 📉 method 2
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define MAX_STRING 255

void bubble_sort_method_1(int arr[], int number){
	int i, j, temp;
	cout << "bubble_sort_method_1: " << endl;
	
	for(j = 0; i < number; i++){
		for(j = i + 1; j < number; j++){
			cout << "I: " << i << " j: " << j << endl;
		}
	}
	
	cout << endl;
}

void bubble_sort_method_2(int arr[], int number){
	int i, j, temp;
	
	cout << "bubble_sort_method_2: " << endl;
	for(i = 0; i < number; i++){
		for(j = 0; j < number-1; j++){
			cout << "I: " << i << " j: " << j << endl;
		}
	}
  
  
  /*  OUTPUT
  bubble_sort_method_1:
I: 0 j: 1
I: 0 j: 2
I: 0 j: 3
I: 0 j: 4
I: 0 j: 5
I: 1 j: 2
I: 1 j: 3
I: 1 j: 4
I: 1 j: 5
I: 2 j: 3
I: 2 j: 4
I: 2 j: 5
I: 3 j: 4
I: 3 j: 5
I: 4 j: 5

bubble_sort_method_2:
I: 0 j: 0
I: 0 j: 1
I: 0 j: 2
I: 0 j: 3
I: 0 j: 4
I: 1 j: 0
I: 1 j: 1
I: 1 j: 2
I: 1 j: 3
I: 1 j: 4
I: 2 j: 0
I: 2 j: 1
I: 2 j: 2
I: 2 j: 3
I: 2 j: 4
I: 3 j: 0
I: 3 j: 1
I: 3 j: 2
I: 3 j: 3
I: 3 j: 4
I: 4 j: 0
I: 4 j: 1
I: 4 j: 2
I: 4 j: 3
I: 4 j: 4
I: 5 j: 0
I: 5 j: 1
I: 5 j: 2
I: 5 j: 3
I: 5 j: 4
  */
	
	cout << endl;
}

int main(void){
	int arr[6] = {5,3,4,6,2,7};
	
	bubble_sort_method_1(arr, 6);
	bubble_sort_method_2(arr, 6);
}
