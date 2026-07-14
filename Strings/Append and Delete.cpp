// Question: https://www.hackerrank.com/challenges/append-and-delete/problem

// Difficulty: Easy

string appendAndDelete(string s, string t, int k)
{
    int common = 0;

    while (common < (int)s.size() && common < (int)t.size() && s[common] == t[common])
    {
        common++;
    }

    int ops = (s.size() - common) + (t.size() - common);

    if (ops > k)
        return "No";
    if ((k - ops) % 2 == 0)
        return "Yes";
    if (s.size() + t.size() <= k)
        return "Yes";

    return "No";
}