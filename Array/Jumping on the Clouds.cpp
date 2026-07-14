// Question: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

// Difficulty: Easy

int jumpingOnClouds(vector<int> c)
{
    int jumps = 0;
    int i = 0;

    while (i < (int)c.size() - 1)
    {
        if (i + 2 < (int)c.size() && c[i + 2] == 0)
        {
            i += 2;
        }
        else
        {
            i += 1;
        }
        jumps++;
    }

    return jumps;
}