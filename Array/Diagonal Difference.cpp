// Question: https://www.hackerrank.com/challenges/diagonal-difference/problem

//  Difficulty: Easy

int diagonalDifference(vector<vector<int>> arr)
{
    int primarySum = 0, secondarySum = 0, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];
        secondarySum += arr[i][n - 1 - i];
    }

    return abs(primarySum - secondarySum);
}