#include <bits/stdc++.h>
using namespace std;

int main(){
	int number[4] = {1,2,3,4};
	
	int temp;
	
	for(int i: number){
		cout << i << "\t";
	}
	cout << endl;
	
	temp = number[1];
	number[1] = number[3];
	number[3] = temp;
	
	for(int i: number){
		cout << i << "\t";
	}
	cout << endl;
}
