#include<iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    
    a = a - 11;
    b = b - 11;
    c = c - 11;
    
    if ((a * 1440) + b * 60 + c < 0)
         cout << -1;
    else cout << (a * 1440) + b * 60 + c;
}