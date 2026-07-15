// Question: https://www.hackerrank.com/challenges/palindrome-index/problem

// Difficulty: Easy

bool isPalindromeRange(const string &s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

int palindromeIndex(string s)
{
    int i = 0, j = (int)s.size() - 1;

    while (i < j && s[i] == s[j])
    {
        ++i;
        --j;
    }

    if (i >= j)
        return -1;

    if (isPalindromeRange(s, i + 1, j))
        return i;
    if (isPalindromeRange(s, i, j - 1))
        return j;

    return -1;
}