// Question: https://www.hackerrank.com/challenges/missing-numbers/problem

// Difficulty: Easy

vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    unordered_map<int, int> freqA, freqB;

    for (int x : arr)
        freqA[x]++;
    for (int x : brr)
        freqB[x]++;

    vector<int> result;
    for (auto &p : freqB)
    {
        int val = p.first;
        if (freqA[val] != p.second)
        {
            result.push_back(val);
        }
    }

    sort(result.begin(), result.end());
    return result;
}