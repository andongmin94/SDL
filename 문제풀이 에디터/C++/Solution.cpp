#include <bits/stdc++.h>

using namespace std;

int board[1000][1000];
int vis[1000][1000] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<pair<int, int>> Q;
    int max_v = 0;
    bool minus_one = true;
    bool zero = true;

    int x, y;
    cin >> y >> x;

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 0)
                zero = false;
            if (board[i][j] == 1)
            {
                Q.push({ i, j });
                vis[i][j] = 1;
            }
        }
    }

    int dx[4] = { 0,1,0,-1 };
    int dy[4] = { 1,0,-1,0 };

    while (!(Q.empty()))
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = cur.second + dy[i];
            int nx = cur.first + dx[i];
            if (nx >= 0 && nx < x && ny >= 0 && ny < y && board[ny][nx] == 0 && vis[ny][nx] == 0)
            {
                Q.push({ ny, nx });
                vis[ny][nx] = vis[cur.first][cur.second] + 1;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            max_v = max(max_v, vis[i][j]);
            if (vis[i][j] == 0)
                minus_one = false;
            cout << vis[i][j];
        }
        cout << '\n';
    }
    cout << minus_one;

    if (zero)
        cout << 0;
    else if (minus_one)
        cout << -1;
    else cout << max_v - 1;
}