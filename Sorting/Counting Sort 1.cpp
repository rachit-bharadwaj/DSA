// Question: https://www.hackerrank.com/challenges/one-month-preparation-kit-countingsort1/problem

// Difficulty: Easy

vector<int> countingSort(vector<int> arr)
{
    vector<int> freq(100, 0);

    for (int x : arr)
    {
        freq[x]++;
    }

    return freq;
}