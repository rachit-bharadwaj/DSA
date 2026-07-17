// Question: https://www.hackerrank.com/challenges/find-the-median/problem

// Difficulty: Easy

int findMedian(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() / 2];
}
