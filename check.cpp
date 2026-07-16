// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cin >> ch;

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         cout << "Alphabet";
//     else if (ch >= '0' && ch <= '9')
//         cout << "Number";
//     else
//         cout << "Special Character";

//     return 0;
// }


#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isalpha(ch))
        cout << "Alphabet";
    else if (isdigit(ch))
        cout << "Number";
    else
        cout << "Special Character";

    return 0;
}