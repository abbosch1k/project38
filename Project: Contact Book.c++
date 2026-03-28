#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    Contact c;

    cout << "Name: ";
    cin >> c.name;
    cout << "Phone: ";
    cin >> c.phone;

    contacts.push_back(c);

    for (auto x : contacts)
        cout << x.name << " - " << x.phone << endl;
}
