# include <iostream>
using namespace std; 
int main (){
    int num, divisor;
    cout <<"Enter a number:";
    cin >> num;
    cout <<"Enter a divisor:";
    cin >> divisor;
    if (divisor == 0){
        cout <<"Divisible by zero is not possible.";
    }
    else if (num % divisor == 0){
        cout << num <<" is divisible by"<<" "<<divisor;
    }
    else {
        cout << num <<" is not divisible by"<<" "<<divisor;
    }
    return 0;
}