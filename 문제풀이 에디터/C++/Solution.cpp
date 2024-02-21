#include <bits/stdc++.h>

using namespace std;

int board[100][100][100] = { 0, };
int vis[100][100][100] = { 0, };

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     queue<tuple<int, int, int>> Q;
     int max_v = 0;
     bool minus_one = false;
     bool zero = true;

     int x, y, z;
     cin >> x >> y >> z;

     for (int i = 0; i < z; i++)
     {
          for (int j = 0; j < y; j++)
               for (int k = 0; k < x; k++)
               {
                    cin >> board[i][j][k];
                    if (board[i][j][k] == 0)
                         zero = false;
                    if (board[i][j][k] == 1)
                    {
                         Q.push({i, j, k});
                         vis[i][j][k] = 1;
                    }
                    if (board[i][j][k] == -1)
                         vis[i][j][k] = -1;
               }
     }
     int dx[6] = { 0,1,0,-1,0,0 };
     int dy[6] = { 1,0,-1,0,0,0 };
     int dz[6] = { 0,0,0,0,1,-1 };

     while (!(Q.empty()))
     {
          tuple<int, int, int> cur = Q.front();
          Q.pop();
          for (int i = 0; i < 6; i++)
          {
               int nz = get<0>(cur) + dx[i];
               int ny = get<1>(cur) + dy[i];
               int nx = get<2>(cur) + dz[i];
               if (nx >= 0 && nx < x && ny >= 0 && ny < y && nz >= 0 && nz < z && board[nz][ny][nx] == 0 && vis[nz][ny][nx] == 0)
               {
                    Q.push({ nz, ny, nx  });
                    vis[nz][ny][nx] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
               }
          }
     }

     for (int i = 0; i < z; i++)
          for (int j = 0; j < y; j++)
               for (int k = 0; k < x; k++)
               {
                    max_v = max(max_v, vis[i][j][k]);
                    if (vis[i][j][k] == 0)
                         minus_one = true;
               }

     if (zero == true)
          cout << 0;
     else if (minus_one)
          cout << -1;
     else cout << max_v - 1;
}