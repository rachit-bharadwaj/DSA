// Question: https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem

// Difficulty: Easy

void decentNumber(int n)
{
    int fiveCount = n - (n % 3);

    while (fiveCount >= 0 && (n - fiveCount) % 5 != 0)
    {
        fiveCount -= 3;
    }

    if (fiveCount < 0)
    {
        cout << -1 << "\n";
        return;
    }

    cout << string(fiveCount, '5') << string(n - fiveCount, '3') << "\n";
}
