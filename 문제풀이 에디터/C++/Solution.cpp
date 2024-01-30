#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dx[] = { 0,1,0,-1 };
    int dy[] = { 1,0,-1,0 };

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n, k, cnt = 0;
        cin >> m >> n >> k;

        int board[51][51] = { 0, };
        int   vis[51][51] = { 0, };
        for (int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            board[x][y] = 1;
        }
        queue<pair<int, int>> Q;
        for (int a = 0; a < m; a++)
        {
            for (int b = 0; b < n; b++)
            {
                if (board[a][b] == 1 && vis[a][b] == 0) Q.push({ a, b }); cnt++;

                while (!(Q.empty()))
                {
                    pair<int, int> p = Q.front();
                    Q.pop();

                    for (int c = 0; c < 4; c++)
                    {
                        int nx = p.first + dx[c];
                        int ny = p.second + dy[c];

                        if (nx >= 0 && )
                    }
                }
            }
        }
        cout << cnt;
    }
}