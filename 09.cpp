// Store and display student records
#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    Student s[3];

    // Input
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ID, Name, Marks: ";
        cin >> s[i].id >> s[i].name >> s[i].marks;
    }

    // Output
    cout << "\nStudent Records: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << "ID: " << s[i].id
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }
    return 0;
}