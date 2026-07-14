// Question: https://www.hackerrank.com/challenges/alternating-characters/problem

// Difficulty: Easy

int alternatingCharacters(string s)
{
    int deletions = 0;

    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            deletions++;
        }
    }

    return deletions;
}