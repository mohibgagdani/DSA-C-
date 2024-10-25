#include <iostream>

using namespace std;

// 1 10 11 20 21
// 2 9  12 19 22
// 3 8  13 18 23
// 4 7  14 17 24
// 5 6  15 16 25


int main() {
    
    int a;

    for (int row = 1; row <= 5; row++) 
    {
        for (int col = 1; col <= 5; col++) 
        {
                                    
            a = (col - 1) * 5 + row; //odd

            if (col % 2 == 0) 
            {
                a = col * 5 - row + 1; //even
            }
            cout << a << "\t";
        }
        cout << endl;
    }
}