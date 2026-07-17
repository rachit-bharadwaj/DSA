// Question: https://www.hackerrank.com/challenges/priyanka-and-toys/problem

// Difficulty: Easy

int toys(vector<int> w)
{
    if (w.empty())
        return 0;

    sort(w.begin(), w.end());

    int containers = 1;
    int minWeight = w[0];

    for (int i = 1; i < (int)w.size(); ++i)
    {
        if (w[i] > minWeight + 4)
        {
            containers++;
            minWeight = w[i];
        }
    }

    return containers;
}