#include <iostream>
using namespace std;

void test(int n){
	cout << n << endl;
	if(n == 10) test(n-1);
	else cout << "O.K. Finish" << endl;
}

int main(){
	int n = 10;
	test(n);
}

/* OUTPUT
10
9
O.K. Finish
*/
