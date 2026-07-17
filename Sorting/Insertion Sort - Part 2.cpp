// Question: https://www.hackerrank.com/challenges/insertionsort2/problem

// Difficulty: Easy

void insertionSort2(int n, vector<int> arr)
{
    for (int i = 1; i < n; ++i)
    {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && value < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;

        for (int k = 0; k < n; ++k)
        {
            cout << arr[k] << (k == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}