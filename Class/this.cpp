#include <iostream>
using namespace std;

class MyClass{
	public:
		int x;
		MyClass(int x){
			this -> x = x;
		}
};

int main(){
	MyClass myObj(100);
	
	cout << myObj.x;	
}

/* OUTPUT
100
*/
