// Question: https://www.hackerrank.com/challenges/save-the-prisoner/problem

// Difficulty: Easy

int saveThePrisoner(int n, int m, int s)
{
    return (int)((s - 1LL + m - 1) % n + 1);
}
