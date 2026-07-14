// Question: https://www.hackerrank.com/challenges/circular-array-rotation/problem

// Difficulty: Easy

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int n = a.size();
    vector<int> temp(n);
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }

    a = temp;

    for (int i = 0; i < queries.size(); i++)
    {
        res.push_back(a[queries[i]]);
    }

    return res;
}