// Question: https://www.hackerrank.com/challenges/acm-icpc-team/problem

// Difficulty: Easy

vector<int> acmTeam(vector<string> topic)
{
    int maxTopics = 0;
    int teamCount = 0;
    int n = topic.size();
    int m = topic[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int known = 0;
            for (int k = 0; k < m; k++)
            {
                if (topic[i][k] == '1' || topic[j][k] == '1')
                {
                    known++;
                }
            }

            if (known > maxTopics)
            {
                maxTopics = known;
                teamCount = 1;
            }
            else if (known == maxTopics)
            {
                teamCount++;
            }
        }
    }

    return {maxTopics, teamCount};
}
