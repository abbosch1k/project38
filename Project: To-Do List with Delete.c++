#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice, index;
    string task;

    while (true) {
        cout << "1 Add 2 Delete 3 Show 4 Exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                break;

            case 2:
                cin >> index;
                tasks.erase(tasks.begin() + index - 1);
                break;

            case 3:
                for (int i = 0; i < tasks.size(); i++)
                    cout << i+1 << ". " << tasks[i] << endl;
                break;

            case 4:
                return 0;
        }
    }
}
