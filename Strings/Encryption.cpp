// Question: https://www.hackerrank.com/challenges/encryption/problem

// Difficulty: Medium

string encryption(string s)
{
    string t;
    t.reserve(s.size());
    for (char c : s)
    {
        if (c != ' ')
            t.push_back(c);
    }

    int L = t.size();
    int rows = (int)floor(sqrt(L));
    int cols = (int)ceil(sqrt(L));

    if (rows * cols < L)
    {
        rows++;
    }

    string result;
    for (int c = 0; c < cols; ++c)
    {
        for (int r = 0; r < rows; ++r)
        {
            int idx = r * cols + c;
            if (idx < L)
            {
                result.push_back(t[idx]);
            }
        }
        if (c != cols - 1)
            result.push_back(' ');
    }

    return result;
}