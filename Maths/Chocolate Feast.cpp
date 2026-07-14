// Question: https://www.hackerrank.com/challenges/chocolate-feast/problem

// Difficulty: Easy

int chocolateFeast(int n, int c, int m)
{
    int chocolates = n / c;
    int wrappers = chocolates;

    while (wrappers >= m)
    {
        int extra = wrappers / m;
        chocolates += extra;
        wrappers = extra + (wrappers % m);
    }

    return chocolates;
}