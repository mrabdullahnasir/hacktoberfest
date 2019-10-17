#include <iostream>

using namespace std;


int factorial(int number){
    if (number == 0 || number == 1){
    number = 1;
    }
    else
    {
    number = number * factorial(number-1);
    }
    return number;
}

int main(){
    int number;
    cout<< "Enter the number you want to check the factorial" << endl;
    cin >> number;
    cout<< "The factorial of given number is " << factorial(number) << endl;
    return 0;
