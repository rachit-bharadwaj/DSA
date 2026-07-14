// Question: https://www.hackerrank.com/challenges/beautiful-triplets/problem

// Difficulty: Easy

int beautifulTriplets(int d, vector<int> arr)
{
    unordered_set<int> seen(arr.begin(), arr.end());
    int count = 0;

    for (int x : arr)
    {
        if (seen.count(x + d) && seen.count(x + 2 * d))
        {
            count++;
        }
    }

    return count;
}