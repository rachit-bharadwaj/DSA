// Question: https://www.hackerrank.com/challenges/minimum-distances/problem

// Difficulty: Easy

int minimumDistances(vector<int> a)
{
    unordered_map<int, int> lastIndex;
    int ans = INT_MAX;

    for (int i = 0; i < (int)a.size(); i++)
    {
        if (lastIndex.count(a[i]))
        {
            ans = min(ans, i - lastIndex[a[i]]);
        }
        lastIndex[a[i]] = i;
    }

    return (ans == INT_MAX) ? -1 : ans;
}