// Question: https://www.hackerrank.com/challenges/sherlock-and-squares/problem

// Difficulty: Easy

int squares(int a, int b)
{
    return (int)(floor(sqrt(b)) - floor(sqrt(a - 1)));
}