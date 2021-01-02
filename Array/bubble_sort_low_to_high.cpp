#include <bits/stdc++.h>
using namespace std;

int main(){
	// bubble sort algorithm
	int arr_number[5] = {5,4,3,2,1};
	
	cout << "Before Sorting" << endl;
	for(int i: arr_number){
		cout << i << "\t";
	}
	cout << endl;
	
	// sorting
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(arr_number[j] < arr_number[i]){
				int temp = arr_number[i];
				arr_number[i] = arr_number[j];
				arr_number[j] = temp;
			}
		}
	}
	
	cout << "After Sorting" << endl;
	for(int i: arr_number){
		cout << i << "\t";
	}
	cout << endl;
}
