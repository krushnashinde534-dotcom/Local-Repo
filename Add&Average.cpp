#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0, count = 0;
    float average;

    cout << "Enter numbers (Enter 0 to stop): " << endl;

    while (true) {
        cin >> num;

        if (num == 0)
            break;

        sum += num;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << average << endl;
    } else {
        cout << "No numbers entered." << endl;
    }

    return 0;
}