// Questions: https://www.hackerrank.com/challenges/two-strings/problem

// Difficulty: Easy

string twoStrings(string s1, string s2)
{
    vector<bool> seen(26, false);

    for (char c : s1)
    {
        seen[c - 'a'] = true;
    }

    for (char c : s2)
    {
        if (seen[c - 'a'])
            return "YES";
    }

    return "NO";
}