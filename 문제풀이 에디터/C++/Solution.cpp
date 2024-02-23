#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s, arr;
        int a;
        cin >> s >> a >> arr;

        arr.erase(remove(arr.begin(), arr.end(), '['), arr.end());
        arr.erase(remove(arr.begin(), arr.end(), ']'), arr.end());

        stringstream ss(arr);
        string temp;
        deque<int> dq;

        while (getline(ss, temp, ','))
            if (!temp.empty())
                dq.push_back(stoi(temp));

        bool reversed = false, error = false;

        for (auto e : s)
        {
            if (e == 'R')
                reversed = !reversed;
            
            if (e == 'D')
            {
                if (dq.empty())
                {
                    error = true;
                    cout << "error\n";
                    break;
                }
                
                if (reversed)
                    dq.pop_back();
                else 
                    dq.pop_front();
            }
        }

        if (!error)
        {
            cout << '[';
            
            while (!dq.empty())
            {
                if (reversed)
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                
                if (!reversed)
                {
                    cout << dq.front();
                    dq.pop_front();
                }
                
                if (!dq.empty())
                    cout << ',';
            }
            cout << ']' << '\n';
        }
    }
}