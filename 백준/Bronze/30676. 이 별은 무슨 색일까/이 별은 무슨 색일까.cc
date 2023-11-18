#include<iostream>

using namespace std;

int main() {

    int a;
    cin >> a;
    if (a >= 620)
        cout << "Red";
    else if (a >= 590)
        cout << "Orange";
    else if (a >= 570)
        cout << "Yellow";
    else if (a >= 495)
        cout << "Green";
    else if (a >= 450)
        cout << "Blue";
    else if (a >= 425)
        cout << "Indigo";
    else
        cout << "Violet";
}