// Question: https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

// Difficulty: Easy

int theLoveLetterMystery(string s)
{
    int ops = 0;
    int i = 0, j = (int)s.size() - 1;

    while (i < j)
    {
        ops += abs(s[i] - s[j]);
        i++;
        j--;
    }

    return ops;
}
