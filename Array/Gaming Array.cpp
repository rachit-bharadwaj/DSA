// Question: https://www.hackerrank.com/challenges/an-interesting-game-1/problem

// Difficulty: Medium

string gamingArray(vector<int> arr)
{
    int maxSoFar = INT_MIN;
    int moves = 0;

    for (int x : arr)
    {
        if (x > maxSoFar)
        {
            maxSoFar = x;
            moves++;
        }
    }

    return (moves % 2 == 1) ? "BOB" : "ANDY";
}