#include <iostream>
#include <string>

using namespace std;

int main(){
    string userName("value value");

    cout << "what's your full name? \n";

    getline(cin, userName);

    cout << "you're called " << userName << endl;

    return 0;
}
/*NB: sometimes i'll have to use cin.ignore('\n') before getline to empty 'the buffer'
if i dont, i could meet some issues of data cut.
remembering, i started by getting 'lisa' instead of 'lisa lou', 
then 'lou', then 'isa lou' and finaly 'lisa lou' with this specific syntax. */