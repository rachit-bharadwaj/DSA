// Question: https://www.hackerrank.com/challenges/mark-and-toys/problem

// Difficulty: Easy

int maximumToys(vector<int> prices, int k)
{
    sort(prices.begin(), prices.end());

    int count = 0;
    for (int p : prices)
    {
        if (p > k)
            break;
        k -= p;
        count++;
    }

    return count;
}
