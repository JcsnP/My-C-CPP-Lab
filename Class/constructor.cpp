#include <iostream>
using namespace std;

class Car{
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z){ // constructor with parameters
			brand = x;
			model = y;
			year = z;
		}
		
};

class Employee{
	public:
		string firstName;
		string lastName;
		int id;
		Employee(string x, string y, int z);
};

Employee::Employee(string x, string y, int z){
	firstName = x;
	lastName = y;
	id = z;
}

int main(void){
	// create car object and call the constructor with difference value
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);
	
	Employee employee1("Chitsanupong", "Paenyoi", 3012);
	Employee employee2("Michael", "Jackson", 3013);

	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
	
	cout << employee1.firstName << " " << employee1.lastName << " " << employee1.id << endl;
	cout << employee2.firstName << " " << employee2.lastName << " " << employee2.id << endl;
	
}
