#include <bits/stdc++.h>
using namespace std;

//typedef long int ll;

int main(){
	int Integer1 = 10;
	float Float1 = 30.5;
	
	/*	METHOD 1 : int(varible)		example:	a = int(a);   [functional]
	 *  METHOD 2 : (int)varible		example:	a = (int)a;   [C-like]
   *  ควรสร้างตัวแปรมารับค่าใหม่ที่ทำการแปลง
	 */
   
  int(Integer1);
	
	Integer1 = (float) Integer1;
	
	cout << "Value of Integer 1 = " << Integer1 << endl;
	cout << "Value of Float 1 = " << Float1 << endl;
	
	cout << "----------------------------------------------------" << endl;
	
	cout << "Integer 1: " << Integer1 << endl;
	cout << "Integer 1 + Float 1: " << Integer1 + Float1 << endl;
	cout << "int(Integer 1 + Float): " << int(Integer1 + Float1) << endl;
	cout << "flaot(Integer 1 + Float 1): " << float(Integer1 + Float1) << endl;
	
}
