#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    string text;

    cout << "Write text: ";
    getline(cin, text);

    file << text;
    file.close();
}
