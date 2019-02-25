#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    double a(0), b(0);
    int opp(0);
    double result(0);
    cout << "Welcome to my first cpp calculator !!\n";
    cout << "Please start by typing a number: \n --> ";
    cin >> a;
    cout << "what do you want to do to this number ?\n" <<
    "(1 = add, 2 = substract, 3 = multiply, 4 = divide, 5 = power)\n --> ";
    cin >> opp;
    cout << "Then type another number to complete the operation:\n --> ";
    cin >> b;
    switch(opp){
        case 1:
        result = a + b;
        cout << "Ok!! so " << a << " + " << b << " = " << result << endl;
        break;

        case 2:
        result = a - b;
        cout << "Ok!! so " << a << " - " << b << " = " << result << endl;
        break;

        case 3:
        result = a * b;
        cout << "Ok!! so " << a << " * " << b << " = " << result << endl;
        break;

        case 4:
        result = a / b;
        cout << "Ok!! so " << a << " / " << b << " = " << result << endl;
        break;

        case 5:
        result = pow(a,b);
        cout << "Ok!! so " << a << " ^ " << b << " = " << result << endl;
        break;
    }
    
    return 0;
}