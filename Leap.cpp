#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year.";
    } 
    else {
        cout << year << " is not a Leap Year."<<endl;
    }
    cout <<"Thank you for using this leap year checker!" <<endl;

    return 0;
}
