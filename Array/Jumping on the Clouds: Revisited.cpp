// Question: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem

// Difficulty: Easy

int jumpingOnClouds(vector<int> c, int k)
{
    int n = c.size();
    int e = 100;
    int pos = 0;

    do
    {
        pos = (pos + k) % n;
        e -= 1;
        if (c[pos] == 1)
            e -= 2;
    } while (pos != 0);

    return e;
}
