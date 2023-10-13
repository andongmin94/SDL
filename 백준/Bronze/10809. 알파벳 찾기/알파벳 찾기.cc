#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ALPHA = "abcdefghijklmnopqrstuvwxyz";
    int arr[26] = { 0, };
    
    for (int i = 0; i < 26; i++)
        arr[i] = -1;
    
    for (int k = 0; k < s.length(); k++)
        for (int j = 0; j < ALPHA.length(); j++)
            if (ALPHA[j] == s[k] && arr[j] == -1)
                arr[j] = k;

    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
}