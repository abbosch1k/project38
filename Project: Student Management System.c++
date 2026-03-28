#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    vector<Student> students;
    Student s;

    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;

    students.push_back(s);

    for (auto st : students)
        cout << st.name << " " << st.age << endl;
}
