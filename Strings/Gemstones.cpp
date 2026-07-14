// Question: https://www.hackerrank.com/challenges/gem-stones/problem

// Difficulty: Easy

int gemstones(vector<string> arr)
{
    vector<int> freq(26, 0);

    for (string &rock : arr)
    {
        vector<bool> seen(26, false);

        for (char c : rock)
        {
            seen[c - 'a'] = true;
        }

        for (int i = 0; i < 26; i++)
        {
            if (seen[i])
                freq[i]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == (int)arr.size())
            count++;
    }

    return count;
}