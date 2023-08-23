#include  <iostream>

using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int* arr = new int[N];
        for (int j = 0; j < N; j++)
            scanf("%1d", &arr[j]);
        
        int res = 0;
        int res_num = 0;
        for(int j = 0; j < N; j++)
        {
            int temp = 0;
            
            for(int k = 0; k < N; k++)
                if (arr[j] == arr[k])
                    temp += 1;
            
            if (res <= temp)
            {
                res = temp;
                if (res_num < arr[j])
                    res_num = arr[j];
            }
        }
        cout << "#" << i + 1 << " " << res_num << " " << res << endl;
        delete[] arr;
    }
}