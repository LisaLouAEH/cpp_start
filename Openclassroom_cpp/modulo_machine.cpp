#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int a(0), b(0);
    int modulo(0);

    cout << "Hey !! you need a quick modulo ? you're in the good place : \n" <<
    "Please type the first number --> ";
    cin >> a;
    cout << "Then, the second one ? \n --> ";
    cin >> b;
    modulo = a % b;
    cout << "Ok, so.. " << a << " modulo " << b << " = " << modulo << " ! \n";
    return 0;
}
