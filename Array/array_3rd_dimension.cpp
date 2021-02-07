 #include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[2][2][2] = {
		{
			{1,2},
			{3,4}
		},
		{
			{5,6},
			{7,8}
		}
	};
	
	cout << arr[1][1][1];     // 8
}
