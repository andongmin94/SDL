#include<iostream>

using namespace std;

int main() {

    unsigned long long a = -1;

    while (1)
    {
        cin >> a;
        if (a == 0)
            break;

        if (a % 42 == 0)
            cout << "PREMIADO" << endl;
        else
            cout << "TENTE NOVAMENTE" << endl;
    }
}