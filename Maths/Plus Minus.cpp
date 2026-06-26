// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-plus-minus/problem

// Difficulty: Easy

void plusMinus(vector<int> arr)
{

    int n = arr.size(), posCount = 0, negCount = 0, zeroCount = 0;
    double posRatio = 0, negRatio = 0, zeroRatio = 0;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    posRatio = static_cast<double>(posCount) / n;
    negRatio = static_cast<double>(negCount) / n;
    zeroRatio = static_cast<double>(zeroCount) / n;

    cout << fixed << setprecision(6) << posRatio << endl;
    cout << fixed << setprecision(6) << negRatio << endl;
    cout << fixed << setprecision(6) << zeroRatio << endl;
}
