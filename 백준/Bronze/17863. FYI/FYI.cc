#include<iostream>

using namespace std;

int main() {

    char a[8];
    cin >> a;
    if (a[0] == '5' && a[1] == '5' && a[2] == '5')
        cout << "YES";
    else
        cout << "NO";
}