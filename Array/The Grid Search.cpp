// Question: https://www.hackerrank.com/challenges/the-grid-search/problem

// Difficulty: Medium

string gridSearch(vector<string> G, vector<string> P)
{
    int R = G.size();
    int C = G[0].size();
    int r = P.size();
    int c = P[0].size();

    for (int i = 0; i <= R - r; ++i)
    {
        for (int j = 0; j <= C - c; ++j)
        {
            bool match = true;
            for (int x = 0; x < r && match; ++x)
            {
                for (int y = 0; y < c; ++y)
                {
                    if (G[i + x][j + y] != P[x][y])
                    {
                        match = false;
                        break;
                    }
                }
            }
            if (match)
                return "YES";
        }
    }

    return "NO";
}