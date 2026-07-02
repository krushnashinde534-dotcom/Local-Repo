// # include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cout <<"Enter the number:";
//     cin >> n;
//     cout <<"Table of "<<n<<endl;
//     for (int i=1; i<=10; i++){
//         cout << n <<"x" << i <<"="<< n*i <<endl;
//     }
//     return 0;
// }



# include <iostream>
using namespace std;
int main (){
int n;
cout<<"Enter a number:";
cin>>n;
for(int i = 1; i<=10; i++){
    cout<<n*i<<endl;
}
cout<<"Table of "<<n<<endl;
return 0;

}