#include <iostream>
using namespace std;

int factorial(int n){
	if(n > 1){
		//cout << n << endl;
		return n*factorial(n-1);	
	}
	else return 1;
}

int main(){
	int n;
	cout << "Please input number: ";
	cin >> n;
	cout << factorial(n);
}
