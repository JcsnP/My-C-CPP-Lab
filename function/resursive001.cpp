#include <iostream>
using namespace std;

void re(int n){
  if(n > 0){ 
    re(n-1);
    cout << n << endl;
  }else{
    cout << "Finish" << endl;
  }
}

int main() {
  int n = 10;
  re(n);
}
