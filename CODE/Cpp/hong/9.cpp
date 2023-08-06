#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Your name ?" << endl;
    string name;
    // cin >> name;
    std::getline(std::cin, name);

    cout << "Your age ?" << endl;
    string age;
    // cin >> age;
    std::getline(std::cin, age);

    cout << name << " " << age << endl;
 
    return 0;
}