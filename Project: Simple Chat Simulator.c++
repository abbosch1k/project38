#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> chat;
    int choice;
    string message;

    while (true) {
        cout << "\n1 Send Message\n2 Show Chat\n3 Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                cout << "Enter message: ";
                getline(cin, message);
                chat.push_back(message);
                break;

            case 2:
                cout << "\n--- Chat ---\n";
                for (string msg : chat)
                    cout << msg << endl;
                break;

            case 3:
                return 0;
        }
    }
}
