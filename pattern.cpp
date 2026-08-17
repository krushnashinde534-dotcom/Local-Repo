#include <iostream>
using namespace std;

int main() {
    int n = 4; // total rows

    for (int i = 1; i <= n; i++) {
        
        // 1. left side 1's
        for (int j = 1; j <= i; j++) {
            cout << "1";
        }

        // 2. middle spaces
        for (int j = 1; j <= 2 * (n - i + 1); j++) {
            cout << " ";
        }

        // 3. right side 1's
        for (int j = 1; j <= i; j++) {
            cout << "1";
        }

        cout << endl; // new line
    }

    return 0;
}