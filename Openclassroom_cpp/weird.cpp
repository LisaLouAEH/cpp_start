#include <iostream>
#include <string>

using namespace std;

int main(){
    int userAge;
    int& response(userAge);// assign <<response>> to the value of <<UserAge>>
    cout << "hi there! how old are you ?\n" << "--> ";
    cin >> response;
    cout << "you're " << userAge << ".\n";

    return 0;
}
/*A little exercice to test the reference use of a variable*/
