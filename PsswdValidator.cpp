#include <iostream>
using namespace std;

int main() {
    int pin;
    int c = 0;
    cout << "BANK OF BLAHBLAH" << endl;
    while (c < 3) {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin == 1234) {
            cout << "PIN accepted!";
            return 0;
        }
        else {
            cout << "Incorrect PIN." << endl;
        }
        c++;
    }
    cout << "Too many incorrect attempts.";
    return 0;
}
