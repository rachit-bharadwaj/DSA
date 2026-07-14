// Question: https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem

// Difficulty: Easy

vector<int> maximumPerimeterTriangle(vector<int> sticks)
{
    sort(sticks.begin(), sticks.end());

    for (int i = (int)sticks.size() - 3; i >= 0; i--)
    {
        if (sticks[i] + sticks[i + 1] > sticks[i + 2])
        {
            return {sticks[i], sticks[i + 1], sticks[i + 2]};
        }
    }

    return {-1};
}