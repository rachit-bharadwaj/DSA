// Question: https://www.hackerrank.com/challenges/strange-code/problem

// Difficulty: Easy

long strangeCounter(long t)
{
    long cycleStart = 3;
    long cycleEnd = 3;

    while (t > cycleEnd)
    {
        cycleStart *= 2;
        cycleEnd += cycleStart;
    }

    return cycleEnd - t + 1;
}