// Question: https://www.hackerrank.com/challenges/largest-permutation/problem

// Difficulty: Easy

vector<int> largestPermutation(int k, vector<int> arr)
{
    int n = arr.size();
    if (k == 0 || n == 0)
        return arr;

    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i)
    {
        pos[arr[i]] = i;
    }

    for (int i = 0; i < n && k > 0; ++i)
    {
        int desired = n - i;
        if (arr[i] == desired)
            continue;

        int idx = pos[desired];

        int currentVal = arr[i];
        arr[i] = desired;
        arr[idx] = currentVal;

        pos[desired] = i;
        pos[currentVal] = idx;

        k--;
    }

    return arr;
}
