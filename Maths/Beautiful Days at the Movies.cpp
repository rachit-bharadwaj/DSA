// Question: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

// Difficulty: Easy

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int day = i; day <= j; day++)
    {
        int x = day, rev = 0;
        while (x > 0)
        {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        if (abs(day - rev) % k == 0)
        {
            count++;
        }
    }

    return count;
}