// Question: https://www.hackerrank.com/challenges/manasa-and-stones/problem

// Difficulty: Easy

vector<int> stones(int n, int a, int b)
{
    vector<int> result;

    if (n == 0)
        return result;

    if (a == b)
    {
        result.push_back((n - 1) * a);
        return result;
    }

    if (a > b)
        swap(a, b);

    int diff = b - a;
    int first = (n - 1) * a;
    int last = (n - 1) * b;

    for (int v = first; v <= last; v += diff)
    {
        result.push_back(v);
    }

    return result;
}