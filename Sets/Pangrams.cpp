// Question: https://www.hackerrank.com/challenges/pangrams/problem

// Difficulty: Easy

string pangrams(string s)
{
    set<char> letters;

    for (char c : s)
    {
        if (isalpha(c))
        {
            letters.insert(tolower(c));
        }
    }

    return (letters.size() == 26) ? "pangram" : "not pangram";
}