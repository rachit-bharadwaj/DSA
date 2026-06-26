// Question: https://www.hackerrank.com/challenges/a-very-big-sum/problem

// Difficulty: Easy

long aVeryBigSum(vector<long> ar)
{

    long sum = 0;

    for (long i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }

    return sum;
}