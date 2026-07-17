// Question: https://www.hackerrank.com/challenges/maximizing-xor/problem

// Difficulty: Easy

int maximizingXor(int l, int r)
{
    int x = l ^ r;
    int ans = 0;
    while (x > 0)
    {
        ans = (ans << 1) | 1;
        x >>= 1;
    }
    return ans;
}