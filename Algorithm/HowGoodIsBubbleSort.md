### How Good is Bubble sort ?

✅ EASY
❎ It will run slowly If the information is incomplete

➡️ O(n²)

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define MAX_STRING 255

void bubble_sort(int arr[], int number){
	int i, j, temp, sum = 0;
	
	for(i = 0; i < number; i++){
		for(j = i + 1; j < number; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				sum += 1;
			}
			sum += 1;
		}
		sum += 1;
	}
		
	cout << sum << endl;    // 81
}

int main(void){
	int arr[9] = {9,8,7,6,5,4,3,2,1};
	
	bubble_sort(arr, 9);
}
```
