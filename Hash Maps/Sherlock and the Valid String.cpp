// Question: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

// Difficulty: Medium

string isValid(string s)
{
    unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    unordered_map<int, int> freqOfFreq;
    for (auto &p : freq)
    {
        freqOfFreq[p.second]++;
    }

    if (freqOfFreq.size() == 1)
    {
        return "YES";
    }

    if (freqOfFreq.size() > 2)
    {
        return "NO";
    }

    vector<pair<int, int>> v;
    for (auto &p : freqOfFreq)
        v.push_back(p);

    int f1 = v[0].first, c1 = v[0].second;
    int f2 = v[1].first, c2 = v[1].second;

    if ((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1))
    {
        return "YES";
    }

    if (f1 == f2 + 1 && c1 == 1)
        return "YES";
    if (f2 == f1 + 1 && c2 == 1)
        return "YES";

    return "NO";
}