#include <iostream>
using namespace std;

int main() {
    string text;
    int count = 1;

    getline(cin, text);

    for (char c : text)
        if (c == ' ') count++;

    cout << count;
}
