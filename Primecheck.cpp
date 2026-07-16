// # include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     bool isPrime = true;
//     cout <<"Enter a number:";
//     cin >>n;
    

//     if (n <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i * i <= n; i++){
//             if ( n % i ==0){
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//     cout << "Prime Number";
//     else
//     cout << "Not Prime number";
//     return 0;

// }


// IN SIMPLE FORMULA TO CHEACK PRIME OR NOT PRIME

// #include <iostream>
// using namespace std;

// int main() {
//     int n, count = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }

//     if (count == 2) {
//         cout << "Prime Number";
//     } else {
//         cout << "Not Prime Number";
//     }

//     return 0;
// }


// TO CHACK 1 TO N PRIME NUMBER

// #include <iostream>
// using namespace std;

// int main() {
//     int n, count;

//     cout << "Enter n: ";
//     cin >> n;

//     for (int num = 1; num <= n; num++) {
//         count = 0;

//         for (int i = 1; i <= num; i++) {
//             if (num % i == 0) {
//                 count++;
//             }
//         }

//         if (count == 2) {
//             cout << num << " is Prime !" << endl;
//         } else {
//             cout << num << " is Not Prime" << endl;
//         }
//     }

//     return 0;
// }

# include <iostream>
using namespace std;
int main ()
{

    int n; 
    bool isPrime = true;

    cout <<"Enter a number:";
    cin >> n; 
    for(int i=2; i * i <=n; i++){
        if(n % i == 0){
            break;
        }
    }
    if(isPrime == true){
        cout <<"Prime number\n";
    }
    else {
        cout << "Non prime number\n";
    
    }
    return 0;
}




/* #include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime == true) {
        cout << "Prime number\n";
    }
    else {
        cout << "Non-prime number\n";
    }

    return 0;
}*/