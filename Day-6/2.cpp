#include <iostream>

using namespace std;

int main() {
    int a[3][3] = { {2, 4, 5}, {5, 0, 7}, {8, 5, 2} };
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";        
        }
        cout << endl;
    }
    cout << endl;
    
   
    for (int i = 0; i < 3; i++) {
        a[i][1] = 0; 
    }


    for (int j = 0; j < 3; j++) {
        a[1][j] = 0; 
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
