// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-picking-numbers/problem

// Difficulty: Easy

int pickingNumbers(vector<int> a)
{
    vector<int> freq(101, 0);
    for (int x : a)
        freq[x]++;

    int best = 0;
    for (int i = 0; i <= 100; i++)
    {
        best = max(best, freq[i] + freq[i + 1]);
    }

    return best;
}