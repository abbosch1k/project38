#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    vector<string> quotes = {
        "Stay hungry, stay foolish",
        "Code never lies",
        "Dream big"
    };

    cout << quotes[rand() % quotes.size()];
}
