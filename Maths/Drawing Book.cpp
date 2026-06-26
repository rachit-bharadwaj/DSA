// Question: https://www.hackerrank.com/challenges/drawing-book/problem

// Difficulty: Easy

int pageCount(int n, int p)
{
    int fromFront = p / 2;
    int fromBack = n / 2 - p / 2;

    return min(fromFront, fromBack);
}