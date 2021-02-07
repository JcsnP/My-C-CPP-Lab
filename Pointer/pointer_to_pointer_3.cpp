#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a = 10;
	int *ptr_1 = &a;
	int **ptr_2 = &ptr_1;
	int ***ptr_3 = &ptr_2;
	
	cout << "value in a = " << a << endl;     // 10
	
	***ptr_3 = 9999;
	
	cout << "value in a = " << a << endl;     // 9999
}
