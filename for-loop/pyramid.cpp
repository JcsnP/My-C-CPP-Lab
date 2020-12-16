#include <bits/stdc++.h>
#include <math.h>
using namespace std;

//pyramid 1 and pyramid 2 is same result, but i use difference in for j method (algorithm) 🤔

void pyramid1(int row){
  for(int i = 0, f = 0; i < row; i++, f += 2){
		for(int j = row-1; j > i; j--){
			cout << " ";
		}
		for(int k = 0; k <= f; k++){
			cout << "*";
		}
		cout << endl;
	}
}

void pyramid2(int row){
  for(int i = 1, f = 1; i <= row; i++, f += 2){
    for(int j = row - i; j > 0; j--){
      cout << " ";
    }
    for(int k = 1; k <= f; k++){
      cout << "*";
    }
    cout << endl;
  }
}

void pyramid3(int row){
  for(int i = 1, f = 1; i <= row; i++, f += 2){
    for(int j = row - i; j > 0; j--){
      cout << " ";
    }
    for(int k = 1; k <= f; k++){
      cout << "*";
    }
    cout << endl;
  }
}

int main(){
	int row = 10;
	
  pyramid1(row);
  pyramid2(row);
  pyramid3(row);
}
