// Question: https://www.hackerrank.com/challenges/closest-numbers/problem

// Difficulty: Easy

vector<int> closestNumbers(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int minDiff = INT_MAX;

    for (int i = 1; i < n; ++i)
    {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }

    vector<int> result;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] - arr[i - 1] == minDiff)
        {
            result.push_back(arr[i - 1]);
            result.push_back(arr[i]);
        }
    }

    return result;
}