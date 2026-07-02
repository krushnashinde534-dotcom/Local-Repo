#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 78, 56, 25, -89, -94};
    int size = 6;

    int max = arr[0];
    int min = arr[0];

    int maxIndex = 0;
    int minIndex = 0;

    // Find maximum and minimum element
    for (int i = 0; i < size; i++) {

        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }

        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    // Swap maximum and minimum
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Print array
    cout << "Array after swapping:\n";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}