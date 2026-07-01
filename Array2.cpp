# include <iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for (int i=0; i<sz; i++){
        if (arr[i]== target){
            return i;
        }
    }
    return -1;
    }
    int main()
    {
        int arr[] = {4, 5, 87, 23, 45, 67, 89};
        int sz = 7;
        int target = 23;

        cout<<linearSearch(arr, sz, target)<<endl;
        return 0;
        }
