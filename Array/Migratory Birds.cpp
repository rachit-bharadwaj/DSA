// Question: https://www.hackerrank.com/challenges/migratory-birds/problem

// Difficulty: Easy

int migratoryBirds(vector<int> arr)
{
    vector<int> freq(6, 0);

    for (int id : arr)
    {
        freq[id]++;
    }

    int maxFreq = 0;
    int bestId = 1;

    for (int id = 1; id <= 5; id++)
    {
        if (freq[id] > maxFreq)
        {
            maxFreq = freq[id];
            bestId = id;
        }
    }

    return bestId;
}
