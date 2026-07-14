// Question: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

// Difficulty: Easy

string hackerrankInString(string s)
{
    string target = "hackerrank";
    int j = 0;

    for (char c : s)
    {
        if (j < (int)target.size() && c == target[j])
        {
            j++;
        }
    }

    return (j == (int)target.size()) ? "YES" : "NO";
}