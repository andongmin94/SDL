#include<iostream>
#include<vector>

using namespace std;

int main()
{
    while (1)
    {
        int a;
        cin >> a;
        if (a == 0)
            break;

        vector<int> b;

        for (int i = 0; i < a; i++)
        {
            int j = 0;
            cin >> j;
            b.push_back(j);
        }
        for (int i = 0; i < a; i++)
        {
            cout << b.back() << endl;
            b.pop_back();
        }
        cout << 0 << endl;
    }
}