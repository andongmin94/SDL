#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    for (int i = 1; i < 11; i++)
    {
        int N;
        cin >> N;
        string* palindrome = new string[N];
        string* palindrome_reverse = new string[N];
        char arr[8][8];
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cin >> arr[j][k];
            }
        }
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8 - N; k++)
            {
                for (int l = 0; l < N; l++)
                {
                    palindrome[l] = arr[j][k + l];
                    palindrome_reverse[l] = arr[j][k + N - 1 - l];
                }
                if (palindrome == palindrome_reverse)
                {
                    cnt++;
                }
            }
        }

        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < N; l++)
                {
                    palindrome[l] = arr[k + l][j];
                    palindrome_reverse[l] = arr[k + N - 1 - l][j];
                }
                if (palindrome == palindrome_reverse)
                {
                    cnt++;
                }
            }
        }
        cout << "#" << i << " " << cnt << endl;
    }
}