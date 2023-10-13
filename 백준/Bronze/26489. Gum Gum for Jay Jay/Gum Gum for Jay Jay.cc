#include <iostream>
#include <string>

using namespace std;

int main()
{
    string c;
    int cnt = 0;
    while(getline(cin,c))
        cnt += 1;
    cout << cnt << endl;
}
