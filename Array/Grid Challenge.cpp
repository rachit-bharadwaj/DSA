// Question: https://www.hackerrank.com/challenges/one-week-preparation-kit-grid-challenge/problem

// Difficulty: Easy

string gridChallenge(vector<string> grid)
{
    int n = grid.size();

    for (int i = 0; i < n; i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }

    int m = grid[0].size();
    for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n - 1; row++)
        {
            if (grid[row][col] > grid[row + 1][col])
            {
                return "NO";
            }
        }
    }

    return "YES";
}
