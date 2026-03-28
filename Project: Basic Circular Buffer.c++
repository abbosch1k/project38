#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        cout << "\n1. Add Task\n2. Show Tasks\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                break;

            case 2:
                for (int i = 0; i < tasks.size(); i++)
                    cout << i + 1 << ". " << tasks[i] << endl;
                break;

            case 3:
                return 0;
        }
    }
}
