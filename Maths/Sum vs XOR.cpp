// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-sum-vs-xor/problem

// Difficulty: Easy

long sumXor(long n)
{
    long count = 0;

    while (n > 0)
    {
        if ((n & 1) == 0)
            count++;
        n >>= 1;
    }

    return 1L << count;
}