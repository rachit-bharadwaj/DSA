// Question: https://www.hackerrank.com/challenges/cut-the-sticks/problem

// Difficulty: Easy

vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> result;

    sort(arr.begin(), arr.end());

    int n = arr.size();
    int i = 0;

    while (i < n)
    {
        result.push_back(n - i);

        int current = arr[i];
        while (i < n && arr[i] == current)
        {
            i++;
        }
    }

    return result;
}