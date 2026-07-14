// Question: https://www.hackerrank.com/challenges/misere-nim-1/problem

// Difficulty: Easy

string misereNim(vector<int> s)
{
    int n = s.size();
    int xo = 0;
    bool allOnes = true;

    for (int x : s)
    {
        xo ^= x;
        if (x != 1)
            allOnes = false;
    }

    if (allOnes)
    {
        return (n % 2 == 0) ? "First" : "Second";
    }

    return (xo == 0) ? "Second" : "First";
}