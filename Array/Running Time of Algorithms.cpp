// Question: https://www.hackerrank.com/challenges/runningtime/problem

// Difficulty: Easy

int runningTime(vector<int> arr)
{
    int shifts = 0;
    int n = arr.size();

    for (int i = 1; i < n; ++i)
    {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && value < arr[j])
        {
            arr[j + 1] = arr[j];
            shifts++;
            j--;
        }
        arr[j + 1] = value;
    }

    return shifts;
}