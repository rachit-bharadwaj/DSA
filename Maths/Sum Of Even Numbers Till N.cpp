//  Question: https://www.codingninjas.com/studio/problems/sum-of-even-numbers-till-n_893205?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav

#include <bits/stdc++.h>
long long evenSumTillN(int n)
{
    long long evenSum = 0;

    if (n < 1)
        return 0;

    for (int i = 2; i <= n; i += 2)
        evenSum += i;

    return evenSum;
}