// Question: https://www.hackerrank.com/challenges/service-lane/problem

// Difficulty: Easy

vector<int> serviceLane(vector<int> width, vector<vector<int>> cases)
{
    vector<int> result;

    for (auto &c : cases)
    {
        int mn = INT_MAX;
        for (int i = c[0]; i <= c[1]; i++)
        {
            mn = min(mn, width[i]);
        }
        result.push_back(mn);
    }

    return result;
}
