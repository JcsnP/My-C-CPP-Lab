#include <bits/stdc++.h>
#define PRICE 100000 

using namespace std;

//typedef long int ll;


int main(){
	int price; cin >> price;
	
	if(price > PRICE){
		cout << "Expensive" << endl;
	}else{
		cout << "Cheap" << endl;
	}
}
