// Question: https://www.hackerrank.com/challenges/anagram/problem

// Difficulty: Easy

int anagram(string s)
{
    int n = s.size();
    if (n % 2 != 0)
        return -1;

    int half = n / 2;
    vector<int> cnt(26, 0);

    for (int i = 0; i < half; i++)
        cnt[s[i] - 'a']++;
    for (int i = half; i < n; i++)
        cnt[s[i] - 'a']--;

    int changes = 0;
    for (int x : cnt)
    {
        if (x > 0)
            changes += x;
    }

    return changes;
}