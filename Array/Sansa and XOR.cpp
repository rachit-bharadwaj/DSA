// Question: https://www.hackerrank.com/challenges/sansa-and-xor/problem

// Difficulty: Medium

int sansaXor(vector<int> arr)
{
    int n = arr.size();
    if (n % 2 == 0)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i += 2)
    {
        ans ^= arr[i];
    }
    return ans;
}