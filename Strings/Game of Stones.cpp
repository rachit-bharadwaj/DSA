// Question: https://www.hackerrank.com/challenges/game-of-stones-1/problem

// Difficulty: Easy

string gameOfStones(int n)
{
    return (n % 7 == 0 || n % 7 == 1) ? "Second" : "First";
}
