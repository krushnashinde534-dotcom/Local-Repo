#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float)sum / size;

    cout << "Average = " << average;

    return 0;
}