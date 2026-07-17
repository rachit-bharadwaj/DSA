// Question: https://www.hackerrank.com/challenges/jim-and-the-orders/problem

// Difficulty: Easy

vector<int> jimOrders(vector<vector<int>> orders)
{
    int n = orders.size();
    struct OrderInfo
    {
        int serveTime;
        int id;
    };

    vector<OrderInfo> v(n);
    for (int i = 0; i < n; ++i)
    {
        v[i].serveTime = orders[i][0] + orders[i][1];
        v[i].id = i + 1;
    }

    sort(v.begin(), v.end(), [](const OrderInfo &a, const OrderInfo &b)
         {
        if (a.serveTime != b.serveTime)
            return a.serveTime < b.serveTime;
        return a.id < b.id; });

    vector<int> result(n);
    for (int i = 0; i < n; ++i)
    {
        result[i] = v[i].id;
    }

    return result;
}