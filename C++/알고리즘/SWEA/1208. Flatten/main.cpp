#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int N;
        cin >> N;
        int arr[100] = { 0, };

        for (int j = 0; j < 100; j++)
            cin >> arr[j];

        int temp = N;
        int* max_arr = &arr[0];
        int* min_arr = &arr[0];

        while (true)
        {
            for (int l = 0; l < 100; l++)
            {
                if (*max_arr < arr[l])
                    max_arr = &arr[l];
                if (*min_arr > arr[l])
                    min_arr = &arr[l];
            }
            if (*max_arr - *min_arr <= 1 || temp == 0)
                break;

            *max_arr -= 1;
            *min_arr += 1;
            temp--;
        }
        cout << "#" << i + 1 << " " << *max_arr - *min_arr << endl;
    }
}