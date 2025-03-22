#include <bits/stdc++.h>
using namespace std;


/*
solver : sam_in07
date : 22/3/2025
time : 22:56
topic : DFS 

*/

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, -1, 1};

void dfs(int x, int y) {
    if ( (x < 0) or (x >= n) or (y < 0) or (y >= m) or (grid[x][y] == 'W') or (visited[x][y])) 
    return;

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {

        dfs(x + dx[i], y + dy[i]);

    }

}

int countIslands() {
    int islands = 0;

    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (grid[i][j] == 'L' && !visited[i][j])
             {

                dfs(i, j);

                islands++;

            }

        }

    }

    return islands;

}

int main() {
    cin >> n >> m;

    grid.resize(n, vector<char>(m));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> grid[i][j];

        }
        
    }


    cout << countIslands() << endl;
}
