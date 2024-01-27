#include <bits/stdc++.h>

using namespace std;

char miro[1000][1000] = {0,};
int vis[1000][1000] = {0,};
int burn[1000][1000] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    queue<pair<int,int>> human;
    queue<pair<int,int>> fire;

    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> miro[i][j];
            cout << miro[i][j];
            if (miro[i][j] == 'J')
            {
                human.push({i, j});
                vis[i][j] = 1;
            }
            if (miro[i][j] == 'F')
            {
                fire.push({i, j});
                burn[i][j] = 1;
            }
        }
        cout << '\n';
    }

    while(!(fire.empty()))
    {
        pair<int, int> q = fire.front();
        fire.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = q.first + dx[i];
            int ny = q.second + dy[i];

            if (nx >= 0 && ny >= 0 && nx < r && ny < c && burn[nx][ny] == 0 && miro[nx][ny] == '.')
            {
                fire.push({nx, ny});
                burn[nx][ny] = burn[q.first][q.second] + 1;
            }
        }
    }

    while(!(human.empty()))
    {
        pair<int, int> q = human.front();
        human.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = q.first + dx[i];
            int ny = q.second + dy[i];

            if (nx >= 0 && ny >= 0 && nx < r && ny < c && vis[nx][ny] == 0 && miro[nx][ny] == '.')
            {
                vis[nx][ny] = vis[q.first][q.second] + 1;
                if (vis[nx][ny] < burn[nx][ny])
                    human.push({nx, ny});
                else vis[nx][ny] = 1;
            }
        }
    }

    int possible = 2000;
    for (int i = 0; i < c; i++)
        if (miro[0][i] == '.' && vis[0][i] != 0 && vis[0][i] < possible)
            possible = vis[0][i];
    for (int i = 0; i < c; i++)
        if (miro[r-1][i] == '.' && vis[r-1][i] != 0 && vis[r-1][i] < possible)
            possible = vis[r-1][i];
    for (int i = 0; i < r; i++)
        if (miro[i][0] == '.' && vis[i][0] != 0 && vis[i][0] < possible)
            possible = vis[i][0];
    for (int i = 0; i < r; i++)
        if (miro[i][c-1] == '.' && vis[i][c-1] != 0 && vis[i][c-1] < possible)
            possible = vis[i][c-1];

    if (possible != 2000)
        cout << possible;
    else cout << "IMPOSSIBLE" << '\n';

    cout << '\n';

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << burn[i][j];
        cout << '\n';
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << vis[i][j];
        cout << '\n';
    }
}
