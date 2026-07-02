#include <iostream>
using namespace std;

// Function to calculate sum and product
void sumAndProduct(int arr[], int size)
{
    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

        cout << "Array elements: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sumAndProduct(arr, size);

    return 0;
}