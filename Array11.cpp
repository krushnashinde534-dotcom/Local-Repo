#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,15,20,25,30};
    int size = 5;

    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            count++;
    }

    cout << "Even Count = " << count;

    return 0;
}