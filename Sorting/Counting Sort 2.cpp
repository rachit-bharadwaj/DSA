// Question: https://www.hackerrank.com/challenges/countingsort2/problem

// Difficulty: Easy

int maxNum(vector<int> arr)
{
    int num = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (num <= arr[i])
            num = arr[i];
    }

    return num;
}

vector<int> countingSort(vector<int> arr)
{
    int maxi = maxNum(arr);

    vector<int> countArray(maxi + 1, 0);
    vector<int> sortedArray;

    for (int i : arr)
    {
        countArray[i]++;
    }

    for (int i = 0; i <= maxi; ++i)
    {
        while (countArray[i] > 0)
        {
            sortedArray.push_back(i);
            countArray[i]--;
        }
    }

    return sortedArray;
}