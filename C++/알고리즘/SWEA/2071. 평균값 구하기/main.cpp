#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        double sum = 0;
        double avg;
        int N[10];

        for (int i = 0; i < 10; i++)
        {
            cin >> N[i];
            sum += N[i];
        }

        avg = sum / 10;
        cout << "#" << i + 1 << " " << (int)(avg + 0.5) << endl;
    }
}
