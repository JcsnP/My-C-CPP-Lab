#include <iostream>
using namespace std;

int main() {
  int arr[3] = {1,2,3,};
  
  //Let's say the address is 0x7ffc8bb8b754

  cout << arr << endl;          //value is 0x7ffc8bb8b754
  cout << &arr[0] << endl;      //address is 0x7ffc8bb8b754
}
