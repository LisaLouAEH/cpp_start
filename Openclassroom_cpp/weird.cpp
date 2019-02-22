#include <iostream>
#include <string>

using namespace std;

int main(){
    int userAge;
    int& response(userAge);// assign <<response>> to the value of <<UserAge>>
    cout << "hi there! how old are you ?\n" << "--> ";
    cin >> response;
    cout << "you're " << userAge << ".\n";

    cout << "what's your full name? \n";  
    string userName("value value");
    cin.ignore(1, '\n');
    getline(cin, userName);
    cout << "you're called " << userName << endl;

    return 0;
}
/*A little exercice to test the reference use of a variable*/
