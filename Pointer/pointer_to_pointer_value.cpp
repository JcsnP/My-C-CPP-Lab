#include <iostream>
using namespace std;

int main(){
  // suppose address of array is suppose 0x7fff82b6d0c0

  int arr[] = {1234,5678};
  
  int *pointer1 = arr;      
  int *pointer2 = pointer1; 
  
  cout << arr << endl;          // 0x7fff82b6d0c0
  cout << pointer1 << endl;     // 0x7fff82b6d0c0
  cout << pointer2 << endl;     // 0x7fff82b6d0c0
}
