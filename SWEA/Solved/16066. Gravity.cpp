#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int* arr = new int[N];
        
        for (int j = 0; j < N; j++)
            cin >> arr[j];
        

        int max = -1;
        
        for (int j = 0; j < N; j++)
        {
            int H = 0;
            
            for (int k = j + 1; k < N; k++)
                if (arr[j] > arr[k])
                    H++;
            
            if (H > max)
                max = H;
        }
        cout << "#" << i + 1 << " " << max << endl;
        delete[] arr;
    }
}