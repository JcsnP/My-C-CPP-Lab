#include <iostream>
using namespace std;

int main(){
	int x = 10, y = 20, z = 30;
	
	int *ptr_arr[3];
	ptr_arr[0] = &x;
	ptr_arr[1] = &y;
	ptr_arr[2] = &z;
	
	cout << *ptr_arr[0] << endl;
	cout << *ptr_arr[1] << endl;
	cout << *ptr_arr[2] << endl;
}
