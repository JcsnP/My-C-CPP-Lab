#include <iostream>
using namespace std;

class Vehicle{
	protected:
		int serial;
	public:
		string brand = "Toyota";
		// horn
		void horn(){
			cout << "Beep Beep!!!" << endl;
		}


};

class Car: public Vehicle{
	public:
		int wheels;
		void change_brand(string x){
			brand = x;
		}
		void setter(int x){
			serial = x;
		}
		int getter(){
			return serial;
		}
		void display(){
			cout << "Brand: " << brand << endl;
			cout << "Wheels: " << wheels << endl;
			cout << "Serial Number: " << serial << endl;
		}
};

int main(void){
	Car vios;
	vios.wheels = 4;

	vios.setter(1001);

	// display
	vios.display();
	
	// change brand and serial number
	vios.change_brand("Masda");
	vios.setter(1002);

	vios.display();

	return 0;
}
