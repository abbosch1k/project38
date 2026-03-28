#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int number = rand() % 100 + 1;
    int guess;

    while (true) {
        cin >> guess;

        if (guess > number) cout << "Too high\n";
        else if (guess < number) cout << "Too low\n";
        else {
            cout << "Correct!";
            break;
        }
    }
}
