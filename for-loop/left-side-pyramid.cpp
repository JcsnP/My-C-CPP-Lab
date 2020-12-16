#include <bits/stdc++.h>
using namespace std;

//typedef long int ll;

int main(){
	int row = 5;
	
	for(int i = 1; i <= row; i++){
		for(int j = 0; j < i; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i = row-1; i >= 1; i--){
		for(int j = i; j > 0; j--){
			cout << "*";
		}
		cout << endl;
	}
}
