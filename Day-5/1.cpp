#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col;

    int a[2][3]= { {2,4,7},{5,9,1} };

    cout << endl;

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;
    
    for (j = 0; j < 3; j++)
    {
        for ( i = 0; i < 2; i++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
    
    
}