// Question: https://www.hackerrank.com/challenges/mars-exploration/problem

// Difficulty: Easy

int marsExploration(string s)
{
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char expected = (i % 3 == 1) ? 'O' : 'S';
        if (s[i] != expected)
            count++;
    }

    return count;
}