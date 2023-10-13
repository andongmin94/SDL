#include <iostream>

using namespace std;

int main()
{
    int arr[9] = {0,};
    int arr_max_num = 0;
    int arr_max_idx = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        if (arr[i] > arr_max_num)
        {
            arr_max_num = arr[i];
            arr_max_idx = i + 1;
        }
    }
    cout << arr_max_num << endl;
    cout << arr_max_idx << endl;

    return 0;
}