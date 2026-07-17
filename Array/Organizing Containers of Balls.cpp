// Question: https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem

// Difficulty: Medium

string organizingContainers(vector<vector<int>> container)
{
    int n = container.size();

    vector<long long> rowSum(n, 0), colSum(n, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            rowSum[i] += container[i][j];
            colSum[j] += container[i][j];
        }
    }

    sort(rowSum.begin(), rowSum.end());
    sort(colSum.begin(), colSum.end());

    if (rowSum == colSum)
    {
        return "Possible";
    }
    else
    {
        return "Impossible";
    }
}