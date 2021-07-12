#include <iostream>
using namespace std;

namespace sourcecode{
	int myvar = 55;
	class Employee{
		public:
			int salary = 35000;
			char name[20] = "Chitsanupong";
	};
}

int main(){
	sourcecode::Employee emp1;
	
	cout << sourcecode::myvar << endl;
	cout << "Salary: " << emp1.salary << endl;
	cout << "Name: " << emp1.name << endl;
}
