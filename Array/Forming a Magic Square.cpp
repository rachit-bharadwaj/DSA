// Question: https://www.hackerrank.com/challenges/magic-square-forming/problem

// Difficulty: Medium

int formingMagicSquare(vector<vector<int>> s)
{
    const int magicMatrices[8][3][3] = {
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}}};

    int minCost = INT_MAX;

    for (int i = 0; i < 8; ++i)
    {
        int cost = 0;
        for (int r = 0; r < 3; ++r)
        {
            for (int c = 0; c < 3; ++c)
            {
                cost += abs(s[r][c] - magicMatrices[i][r][c]);
            }
        }
        minCost = min(minCost, cost);
    }

    return minCost;
}