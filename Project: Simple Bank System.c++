#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    int choice;
    double amount;

    while (true) {
        cout << "1 Deposit 2 Withdraw 3 Balance 4 Exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> amount;
                balance += amount;
                break;
            case 2:
                cin >> amount;
                balance -= amount;
                break;
            case 3:
                cout << balance << endl;
                break;
            case 4:
                return 0;
        }
    }
}
