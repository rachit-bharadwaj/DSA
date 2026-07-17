// Question: https://www.hackerrank.com/challenges/flipping-the-matrix/problem

// Difficulty: Medium

int flippingMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size() / 2;
    long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int a = matrix[i][j];
            int b = matrix[2 * n - 1 - i][j];
            int c = matrix[i][2 * n - 1 - j];
            int d = matrix[2 * n - 1 - i][2 * n - 1 - j];

            sum += max({a, b, c, d});
        }
    }

    return (int)sum;
}
