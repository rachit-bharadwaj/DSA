// Question: https://www.hackerrank.com/challenges/one-month-preparation-kit-angry-children/problem

// Difficulty: Medium

int maxMin(int k, vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int res = INT_MAX, n = arr.size();

    for (int i = 0; i + k - 1 < n; ++i)
    {
        int diff = arr[i + k - 1] - arr[i];

        if (diff < res)
            res = diff;
    }

    return res;
}