// Question: https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

// Difficulty: Easy

int minimumAbsoluteDifference(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;

    for (int i = 1; i < arr.size(); i++)
    {
        ans = min(ans, abs(arr[i] - arr[i - 1]));
    }

    return ans;
}
