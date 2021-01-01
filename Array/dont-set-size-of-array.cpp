#include <iostream>
using namespace std;

int main(){
    int fixed_array[5] = {1,2,3,4,5};
    int dont_fixed_array[] = {1,2,3,4,5};
    
    cout << "Fixed Array Size: " << sizeof(fixed_array) << endl;                      // Fixed Array Size: 20
    cout << "Dont't Fixed Array Size: " << sizeof(dont_fixed_array) << endl;          // Don't Fixed Array Size: 20
}
