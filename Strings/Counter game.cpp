// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-counter-game/problem

// Difficulty: Medium

string counterGame(long n)
{
    if (n == 1)
        return "Richard";

    long m = n - 1;
    int moves = 0;
    while (m)
    {
        moves += (m & 1);
        m >>= 1;
    }

    return (moves % 2 == 1) ? "Louise" : "Richard";
}
