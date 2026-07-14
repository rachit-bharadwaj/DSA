// Question: https://www.hackerrank.com/challenges/equality-in-a-array/problem

// Difficulty: Easy

int equalizeArray(vector<int> arr)
{
    unordered_map<int, int> freq;
    int maxFreq = 0;

    for (int x : arr)
    {
        maxFreq = max(maxFreq, ++freq[x]);
    }

    return (int)arr.size() - maxFreq;
}
