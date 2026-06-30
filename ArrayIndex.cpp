#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 78, 56, 25, -89, -94};
    int size = 6;

    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }

        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "Smallest Index = " << smallestIndex << endl;
    cout << "Largest Index = " << largestIndex << endl;

    return 0;
}