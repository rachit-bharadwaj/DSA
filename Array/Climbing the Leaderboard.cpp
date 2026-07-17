// Question: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

// Difficulty: Medium

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> uniqueRanked;
    if (!ranked.empty())
    {
        uniqueRanked.push_back(ranked[0]);
        for (int i = 1; i < (int)ranked.size(); ++i)
        {
            if (ranked[i] != ranked[i - 1])
            {
                uniqueRanked.push_back(ranked[i]);
            }
        }
    }

    vector<int> result;
    int i = (int)uniqueRanked.size() - 1;

    for (int score : player)
    {
        while (i >= 0 && score >= uniqueRanked[i])
        {
            --i;
        }

        result.push_back(i + 2);
    }

    return result;
}