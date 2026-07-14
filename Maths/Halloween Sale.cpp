// Question: https://www.hackerrank.com/challenges/halloween-sale/problem

// Difficulty: Easy

int howManyGames(int p, int d, int m, int s)
{
    int count = 0;

    while (s >= p)
    {
        s -= p;
        count++;
        p = max(p - d, m);
    }

    return count;
}
