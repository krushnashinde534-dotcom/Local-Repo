#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;

    // Even or Odd
    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // Positive, Negative, or Zero
    if (n > 0)
        cout << "Positive Number" << endl;
    else if (n < 0)
        cout << "Negative Number" << endl;
    else
        cout << "Zero" << endl;

    // Prime or Not Prime
    if (n <= 1) {
        prime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}