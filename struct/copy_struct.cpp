#include <iostream>
using namespace std;

struct Employee{
	int salary;
	char name[20];
};

int main(){
	struct Employee emp1 = {35000, "Chitsanupong"}, emp2;
	
	cout << "Before: " << endl;
	cout << "emp2: Name = " << emp2.name << " salary: " << emp2.salary << endl;
	
	emp2 = emp1;
	
	cout << "After: " << endl;
	cout << "emp2: Name = " << emp2.name << " salary: " << emp2.salary << endl;
}
