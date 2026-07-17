// Question: https://www.hackerrank.com/challenges/insertionsort1/problem

// Difficulty: Easy

void insertionSort1(int n, vector<int> arr)
{
    int v = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > v)
    {
        arr[i + 1] = arr[i];

        for (int x : arr)
            cout << x << " ";
        cout << "\n";

        i--;
    }

    arr[i + 1] = v;

    for (int x : arr)
        cout << x << " ";
    cout << "\n";
}