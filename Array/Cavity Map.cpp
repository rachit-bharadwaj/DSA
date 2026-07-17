// Question: https://www.hackerrank.com/challenges/cavity-map/problem

// Difficulty: Easy

vector<string> cavityMap(vector<string> grid)
{
    int n = grid.size();
    if (n <= 2)
        return grid;

    vector<string> result = grid;

    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - 1; ++j)
        {
            char center = grid[i][j];
            if (center > grid[i - 1][j] &&
                center > grid[i + 1][j] &&
                center > grid[i][j - 1] &&
                center > grid[i][j + 1])
            {
                result[i][j] = 'X';
            }
        }
    }

    return result;
}
