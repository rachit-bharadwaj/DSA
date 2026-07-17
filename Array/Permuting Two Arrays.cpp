// Question: https://www.hackerrank.com/challenges/two-arrays/problem

// Difficulty: Easy

string twoArrays(int k, vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < (int)A.size(); ++i)
    {
        if (A[i] + B[i] < k)
        {
            return "NO";
        }
    }
    return "YES";
}