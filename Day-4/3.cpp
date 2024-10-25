#include <iostream>

using namespace std;

int main()
{
    int x, y, i, j, sum = 0;

    cout << "Enter the size of the x: ";
    cin >> x;

    cout << "Enter the size of the y: ";
    cin >> y;

    int a[x][y];

    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                cout << "a[" << i <<"] [" << j <<"]: ";
                cin >> a[i][j];
            }
            cout << endl;
        }

        cout << endl;

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                cout << a[i][j] << "   ";
            }
            cout << endl;
        }
        
        cout << endl;
        
        for(i = 0, j = 0; i < x, j < y; i++, j++)
        {
            sum = sum + a[i][j];
        }

        cout << "Diagonal sum is: " << sum;    
    }
    
}