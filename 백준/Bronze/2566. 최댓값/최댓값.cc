#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int max_pos[2] = {0,};
    int arr[10][10] = {0,};
    for (int i = 1; i < 10; i++)
        for (int j = 1; j < 10; j++)
        {
            cin >> arr[i][j];
            if (max <= arr[i][j])
            {
                max = arr[i][j];
                max_pos[0] = i;
                max_pos[1] = j;
            }
        }
        cout << endl;

    cout << max << endl;
    cout << max_pos[0] << " " << max_pos[1] << endl;
}