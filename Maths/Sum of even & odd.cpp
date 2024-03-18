//  Question: https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

#include <iostream>
using namespace std;

int main()
{
    int n, oddSum = 0, evenSum = 0;

    cin >> n;

    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;

        if (digit % 2 == 0)
            evenSum = evenSum + digit;
        else
            oddSum = oddSum + digit;
    }

    cout << evenSum << ' ' << oddSum;

    return 0;
}
