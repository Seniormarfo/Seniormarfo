
#include <iostream>
using namespace std;

int main(){
    int number1;
    int number2;
    int result;

    int operation;

    cout <<"Enter first number (between 0 to 9):";
    cin >> number1;

    cout <<"Enter Operation:\n";
    cout <<"Enter 1 for Addition:\n";
    cout <<"Enter 2 for Subtraction:\n";
    cout <<"Enter 3 for multiplication:\n";
    cout <<"Enter 4 for Division:\n";
   
    cin >> operation;

    cout <<"Enter Second number (between 0 to 9):";
    cin >> number2;
     

switch (operation)
{
case 1:
cout <<number1<<" "<<"+"<<" "<<number2<< endl;
result = number1 + number2;
    break;

case 2:
cout <<number1<<" "<<"-"<<" "<<number2<< endl;
result = number1 - number2;
    break;
    
case 3:
cout <<number1<<" "<<"*"<<" "<<number2<< endl;
result = number1 * number2;
    break;

    case 4:
cout <<number1<<" "<<"/"<<" "<<number2<< endl;
result = number1 / number2;
    break;

default:
cout << "Invalid Response"<< endl;
    break;
}
        
    cout <<"result =  "<<result<<endl;
  cout<< "       \n"<< endl;

    cout<< "#RisingGenius\n"<< endl;

cout<< "Thank You !!!"<< endl;
}
