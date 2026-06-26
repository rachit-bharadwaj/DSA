// Question: https://www.hackerrank.com/challenges/the-birthday-bar/problem

// Difficulty: Easy

int birthday(vector<int> s, int d, int m)
{

    int count = 0;
    int n = s.size();

    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;

        for (int j = i; j < i + m; j++)
        {
            sum += s[j];
        }

        if (sum == d)
        {
            count++;
        }
    }

    return count;
}
