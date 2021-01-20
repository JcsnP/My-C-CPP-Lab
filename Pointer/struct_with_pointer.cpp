#include <iostream>
using namespace std;

struct STUDENT{
	int id;
	int age;
} STD;

int main(){
	STUDENT *ptr;
	ptr = &STD;
	
	// ptr -> field name
	ptr -> id = 63123456;
	cout << "Please enter student age: ";
 	cin >> ptr -> age;
	
	cout << "Student ID: " << ptr -> id << endl;
	cout << "Student age: " << ptr -> age << endl;
}
