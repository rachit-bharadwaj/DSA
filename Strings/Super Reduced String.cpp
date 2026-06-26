// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-reduced-string/problem

// Difficulty: Easy

string superReducedString(string s)
{
    string result = "";

    for (char a : s)
    {
        if (!result.empty() && result.back() == a)
            result.pop_back();

        else
        {
            result.push_back(a);
        }
    }

    return result.empty() ? "Empty String" : result;
}