#include <iostream>
using namespace std;

class MyClass{
	public:
		int x;
};

class MyChild: public MyClass{
	public:
		int y;
};

class MyGrandChild: public MyChild{
	public:
		int z;
		void display(){
			cout << x << endl << y << endl << z << endl;
		}
};

int main(){
	MyGrandChild mygrandchild;
	
	mygrandchild.x = 100;
	mygrandchild.y = 200;
	mygrandchild.z = 300;
	
	mygrandchild.display();
}

/*OUTPUT
100
*/
