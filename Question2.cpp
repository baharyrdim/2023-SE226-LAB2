#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a number between 3 and 9 (inclusive): ";
    cin >> number;

    if (number < 3 || number > 9) {
        cout << "Invalid input! Please enter a number between 3 and 9." << endl;
        return 0;
    }
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = number - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
