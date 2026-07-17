// Question: https://www.hackerrank.com/challenges/sherlock-and-array/problem

// Difficulty: Easy

string balancedSums(vector<int> arr)
{
    long long total = 0;
    for (int x : arr)
        total += x;

    long long leftSum = 0;
    for (int x : arr)
    {
        long long rightSum = total - leftSum - x;
        if (leftSum == rightSum)
            return "YES";
        leftSum += x;
    }

    return "NO";
}