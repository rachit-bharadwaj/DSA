// Question: https://www.hackerrank.com/challenges/counting-valleys/problem

// Difficulty: Easy

int countingValleys(int steps, string path)
{
    int level = 0;
    int valleys = 0;

    for (char c : path)
    {
        if (c == 'U')
            level++;
        else
            level--;

        if (level == 0 && c == 'U')
        {
            valleys++;
        }
    }

    return valleys;
}