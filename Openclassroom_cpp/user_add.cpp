#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    double a(1), b(1);

    cout << "You're in the additionator. please type the first number you'd like to add: \n";
    cin >> a;
    cout << "OK! you typed " << a << endl << "now type another number : \n";
    cin >> b;

    double const result = a + b;
    cin.ignore();

    cout << "OK!! the result is: \n" << a << " + " << b << " = " << result << "\n you won a bonus!\n"
    << "type now somthing you want to know the root/square: \n";
    double n;
    cin >> n;

    double square = sqrt(n);
    cout << "Well you type " << n << " and the root is " << square << "!!\n";

    double d;
    cout << "Now, let's try something else.\n Please type an other number \n --> ";
    cin >> d;
    double division = square / d;
    cout << "if you divide the previous root by " << d << " you get " << division << endl;
    
    return 0;
}
