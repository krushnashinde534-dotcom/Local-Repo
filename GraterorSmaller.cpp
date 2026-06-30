# include <iostream>
using namespace std;
int main ()
{
    int num1, num2 ;
    cout <<"Enter first number:"<<endl;
    cin >>num1;
    cout <<"Enter second number:"<<endl;
    cin >>num2;
if(num1 > num2){
cout<<num1 <<"num 1 is greater."<<endl;
}
else if (num2 > num1)
{
    cout<<num2 <<"num 2 is greater."<<endl;
}
else 
{
    cout <<"Both numbers are equal!"<<endl;
}
cout <<"Thank you";
return 0;
}



