// Question: https://www.hackerrank.com/challenges/greedy-florist/problem

// Difficulty: Medium

int getMinimumCost(int k, vector<int> c)
{
    sort(c.begin(), c.end(), greater<int>());

    long long total = 0;
    for (int i = 0; i < (int)c.size(); ++i)
    {
        int multiplier = 1 + (i / k);
        total += 1LL * c[i] * multiplier;
    }

    return (int)total;
}