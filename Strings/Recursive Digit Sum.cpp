// Question: https://www.hackerrank.com/challenges/recursive-digit-sum/problem

// Difficulty: Medium

int superDigit(string n, int k)
{
    long long sum = 0;
    for (char c : n)
    {
        sum += c - '0';
    }
    sum *= k;

    if (sum == 0)
        return 0;
    int r = sum % 9;
    return (r == 0) ? 9 : r;
}