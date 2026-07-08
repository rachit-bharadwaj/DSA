// Question: https://www.hackerrank.com/challenges/electronics-shop/problem

// Difficulty: Easy

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int ans = -1;

    for (int k : keyboards)
    {
        for (int d : drives)
        {
            int cost = k + d;
            if (cost <= b)
            {
                ans = max(ans, cost);
            }
        }
    }

    return ans;
}