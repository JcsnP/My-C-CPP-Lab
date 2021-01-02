#include <iostream>
using namespace std;

void breakControl(int n){
  for(int i = 0; i < n; i++){
    if(i == 2){
      break;
      cout << "XD" << endl;
    } 
  }
  cout << "Break Success" << endl;
}

void exitControl(int n){
  if(n == 3){
    exit(1);
  }
  cout << "Exit Success" << endl;
}

int main(){
  int n = 3;
  breakControl(n);
  exitControl(n);
}

// OUTPUT --> break success
