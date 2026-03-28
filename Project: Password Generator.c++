#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    int len;

    cout << "Length: ";
    cin >> len;

    for (int i = 0; i < len; i++)
        cout << chars[rand() % chars.size()];

    return 0;
}
