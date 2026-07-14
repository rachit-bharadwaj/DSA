// Question: https://www.hackerrank.com/challenges/lonely-integer/problem

// Difficulty: Easy

int lonelyinteger(vector<int> a)
{
    int x = 0;
    for (int num : a)
    {
        x ^= num;
    }
    return x;
}