#include <iostream>
using namespace std;

int main(){
	string food = "Chitsannupong";
	string &refer = food;
	
	refer = "James";
	
	cout << food;
}
