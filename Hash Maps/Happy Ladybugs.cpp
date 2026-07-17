// Question: https://www.hackerrank.com/challenges/happy-ladybugs/problem

// Difficulty: Easy

string happyLadybugs(string b)
{
    unordered_map<char, int> freq;
    bool hasEmpty = false;

    for (char c : b)
    {
        if (c == '_')
            hasEmpty = true;
        else
            freq[c]++;
    }

    if (hasEmpty)
    {
        for (auto &p : freq)
        {
            if (p.second == 1)
                return "NO";
        }
        return "YES";
    }

    for (int i = 0; i < (int)b.size(); i++)
    {
        bool leftSame = (i > 0 && b[i] == b[i - 1]);
        bool rightSame = (i + 1 < (int)b.size() && b[i] == b[i + 1]);
        if (!leftSame && !rightSame)
            return "NO";
    }

    return "YES";
}