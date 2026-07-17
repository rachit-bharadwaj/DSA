// Question: https://www.hackerrank.com/challenges/making-anagrams/problem

// Difficulty: Easy

int makingAnagrams(string s1, string s2)
{
    vector<int> freq(26, 0);

    for (char c : s1)
        freq[c - 'a']++;
    for (char c : s2)
        freq[c - 'a']--;

    int deletions = 0;
    for (int x : freq)
        deletions += abs(x);

    return deletions;
}