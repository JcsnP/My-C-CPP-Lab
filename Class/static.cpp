#include <iostream>
using namespace std;

class Human{
	private:
		static int population;
	public:
		string name;
		int age;
		void display(){
			cout << "name: " << name << endl << "age: " << age;
		};
		Human(string x, int y){
			name = x;
			age = y;
			++population;
		}
		int get_population(){
			return population;
		}
};

int Human::population = 0;

int main(){
	Human james("Chitsaupong", 19);
	Human chef("Taworn", 20);
	Human liam("Liam", 48);
	
	cout << "Population: " << liam.get_population();
}
