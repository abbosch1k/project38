#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;
    bool issued;
};

int main() {
    vector<Book> library;
    int choice;
    string name;
    int index;

    while (true) {
        cout << "\n1 Add Book\n2 Issue Book\n3 Show Books\n4 Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Book b;
                cin.ignore();
                cout << "Enter book title: ";
                getline(cin, b.title);
                b.issued = false;
                library.push_back(b);
                break;
            }

            case 2:
                cout << "Enter book number: ";
                cin >> index;
                if (index > 0 && index <= library.size())
                    library[index - 1].issued = true;
                break;

            case 3:
                for (int i = 0; i < library.size(); i++) {
                    cout << i + 1 << ". " << library[i].title;
                    if (library[i].issued) cout << " (Issued)";
                    cout << endl;
                }
                break;

            case 4:
                return 0;
        }
    }
}
