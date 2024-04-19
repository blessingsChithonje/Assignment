#include <iostream>
using namespace std;

int main() {
    int user_input;
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        if (!(cin >> user_input)) {
            cout << "Sorry, you entered invalid number. Please try again\n";
            cin.clear();
            cin.ignore(100, '\n');
        } else if (user_input < 5 || user_input > 10) {
            cout << "you enterd "<< user_input <<" Please enter a number between 5 and 10.\n";
        } else {
            cout << "Your value (" << user_input << ") has been accepted.\n";
            break;
        }
    }
    return 0;
}
