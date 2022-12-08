#include <iostream>
#include <typeinfo>
#include "Position.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    Position position = Position(2,2,5,5);
    position.display();
    int index;
    while (true) {
        cout << "\n Enter numerical position to take the bot. Enter -1 to exit" << endl;
        cin >> index;
        if (index == -1){
            return 0;
        }
        if (typeid(index).name() == typeid(2).name()){
            position.move(index);
        } else {
            cout << "Invalid character, try again" << endl;
            index = -1;
        }
    }
}
