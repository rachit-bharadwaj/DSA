// Question: https://www.hackerrank.com/challenges/mini-max-sum/problem

// Difficulty: Easy

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    long long sum = 0, miniSum = 0, maxSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    miniSum = sum - arr.at(4);
    maxSum = sum - arr.at(0);

    cout << miniSum << " " << maxSum << endl;
}