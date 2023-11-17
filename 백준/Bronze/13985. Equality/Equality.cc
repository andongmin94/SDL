#include<iostream>

using namespace std;

int main() {

    char a[10];
    cin.getline(a, 10);
    if ((int)a[0]-48 + (int)a[4]-48 == (int)a[8]-48)
        cout << "YES";
    else
        cout << "NO";
}