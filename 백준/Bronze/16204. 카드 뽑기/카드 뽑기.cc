#include<iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    sum += min(b, c);
    sum += min((a - b),(a - c));
    cout << sum;
}