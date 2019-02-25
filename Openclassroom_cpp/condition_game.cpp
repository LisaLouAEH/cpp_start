#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int level(0);
    int trash(0);
    cout << "Welcome Dear! \n Let's play to the simpliest game in the world !!!\n" <<
    "For now your level is 0 and to make it grow you just have to type '1' and press 'enter'.\n" <<
    "Understood ?! let's try: \n--> ";
    for(level = 0; level < 10; ++level){
        cin >> trash;
        cout << "You won! You're now level " << level << endl;
    }
    cout << level;
    trash = 0;

    cout << "Okay!!\n Welldone ! Now let's complicate it a little bit more\n" <<
    "Same thing, but this time i'll ask you to type anything else but '1' " <<
    "whithout decrease you're level too much. \n If you reach zero you loose.\n -->";

    while(level < 20){
        if(trash % 2 != 0){
            --level;
            cout << "Damn !! you lost a level !! you're now at level " << level << " !! \n";
            cin >> trash;
        }
        else{
            ++level;
            cout << "Yes BABY !! You're now level " << level << " !!\n";
            cin >> trash;
        }
    }
    cout << "Welldone !!! You're now level 20 ! It is huuuuuge !!!\n" <<
    "We'll let you get some rest before you come back ('cause you'll come back ! 'cause this game is awesome !!)";
    return 0;
}