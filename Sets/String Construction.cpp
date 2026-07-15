// Question: https://www.hackerrank.com/challenges/string-construction/problem

// Difficulty: Easy

int stringConstruction(string s)
{
    set<char> uniqueChars(s.begin(), s.end());

    return (int)uniqueChars.size();
}