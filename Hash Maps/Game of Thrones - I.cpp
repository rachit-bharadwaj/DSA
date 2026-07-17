// Question: https://www.hackerrank.com/challenges/game-of-thrones/problem

// Difficulty: Easy

string gameOfThrones(string s)
{
    unordered_map<char, int> charCount;
    int oddCount = 0;

    for (char c : s)
    {
        charCount[c]++;
    }

    for (auto &p : charCount)
    {
        if (p.second % 2 != 0)
            oddCount++;
    }

    return (oddCount <= 1) ? "YES" : "NO";
}