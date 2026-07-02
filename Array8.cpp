# include <iostream>
using namespace std;
int main (){
    int arr1[]= { 4, 5, 2, 7, 8};
    int arr2[]= { 5, 3, 2, 4, 6};
    int size1 = 5; 
    int size2 = 5;
    
    cout <<"Intersection:";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<< arr1[i]<<" ";
            }
        }
    }
    return 0;
}