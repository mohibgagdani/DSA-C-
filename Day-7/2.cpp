#include <iostream>
using namespace std;

int factorial() {
    int num = 5; 
    int result = 1;

    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int fact = factorial();

    cout << "The factorial is: " << fact << endl;

}
