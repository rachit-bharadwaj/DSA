// Question: https://www.hackerrank.com/challenges/fair-rations/problem

// Difficulty: Easy

string fairRations(vector<int> B)
{
    int loaves = 0;

    for (int i = 0; i < (int)B.size() - 1; i++)
    {
        if (B[i] % 2 != 0)
        {
            B[i]++;
            B[i + 1]++;
            loaves += 2;
        }
    }

    if (B.back() % 2 != 0)
        return "NO";
    return to_string(loaves);
}