#include <iostream>
using namespace std;

struct Test
{
    bool f1; // 1
    double f2; // 8
    int f3; // 4
}; //13
 
//[b][ ][ ][ ][ ][ ][ ][ ]
//[d][d][d][d][d][d][d][d]
//[i][i][i][i][ ][ ][ ][ ]
 
 
struct Test1
{
    bool f1; // 1
    int f3; // 4
    double f2; // 8
}; //13
 
//[b][ ][ ][ ][i][i][i][i]
//[d][d][d][d][d][d][d][d]
 
 
// [0][1][2][3] [4][5][6][7] [8][9][10][11]
// [b][d][d][d] [d][d][d][d] [d][i][i ][i ]
// [i ][ ][ ][ ] [ ][ ][ ][ ] [ ][ ][  ][  ]
 
 
 
int main()
{
    std::cout << "bool - > " << sizeof(bool) << '\n';
    std::cout << "double - > " << sizeof(double) << '\n';
    std::cout << "int - > " << sizeof(int) << '\n';
    std::cout << "Test - > " << sizeof(Test) << '\n';
    std::cout << "Test1 - > " << sizeof(Test1) << '\n';
    return 0;
}
