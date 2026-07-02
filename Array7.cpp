# include <iostream>
using namespace std;
int main (){
    
int arr[]= { 4, 3, 2, 4, 8, 3, 9, 4, 7, 11};
int size = 10;
cout <<"Unique values in the array are:";
for(int i = 0; i < size; i++){
    int count = 0; 
    for(int j = 0; j < size; j++){
        if(arr[i] == arr[j])
        {
            count++;
        }
    }
    if(count == 1)
    {
        cout << arr[i] << " ";
    }
}

return 0;
}