// Question: https://www.hackerrank.com/challenges/luck-balance/problem

// Difficulty: Easy

int luckBalance(int k, vector<vector<int>> contests)
{
    int luck = 0;
    vector<int> important;

    for (auto &c : contests)
    {
        if (c[1] == 0)
        {
            luck += c[0];
        }
        else
        {
            important.push_back(c[0]);
        }
    }

    sort(important.rbegin(), important.rend());

    for (int i = 0; i < (int)important.size(); i++)
    {
        if (i < k)
            luck += important[i];
        else
            luck -= important[i];
    }

    return luck;
}