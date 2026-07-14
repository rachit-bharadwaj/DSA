// Question: https://www.hackerrank.com/challenges/repeated-string/problem

// Difficulty: Easy

long repeatedString(string s, long n)
{
    long quo = 0, rem = 0, len = s.size(), aCount = 0, remCount = 0, res = 0;

    rem = n % len;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
        {
            aCount++;
        }
    }

    for (int i = 0; i < rem; i++)
    {
        if (s[i] == 'a')
        {
            remCount++;
        }
    }

    quo = (n / len);

    res = (quo * aCount) + remCount;

    return res;
}