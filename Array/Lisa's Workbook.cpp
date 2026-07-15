// Question: https://www.hackerrank.com/challenges/lisa-workbook/problem

// Difficulty: Easy

int workbook(int n, int k, vector<int> arr)
{
    int page = 1;
    int special = 0;

    for (int i = 0; i < n; i++)
    {
        int problems = arr[i];
        int start = 1;

        while (start <= problems)
        {
            int end = min(start + k - 1, problems);
            if (page >= start && page <= end)
            {
                special++;
            }
            page++;
            start += k;
        }
    }

    return special;
}