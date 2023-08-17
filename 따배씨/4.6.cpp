#include <iostream>
#include <string>

using namespace std;

int main()
{
    // const char my_strs[] = "Hello, World";
    // const string my_hello{"Hello, World"};
    //
    // // string my_ID = 123; 문자열 자료형에 숫자를 사용할 수 없음.
    // string my_ID = "123";
    // cout << my_hello << endl;
    // cout << my_strs << endl;
    //
    cout << "Your name ? : ";
    string name;
    // cin >> name;
    getline(cin, name);
    
    cout << "Your age ? : ";
    string age;
    // cin >> age;
    getline(cin, age);
    
    cout << name << " " << age << endl;
}