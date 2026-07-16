// Question: https://www.hackerrank.com/challenges/kaprekar-numbers/problem

// Difficulty: Easy

void kaprekarNumbers(int p, int q)
{
    vector<int> ans;

    for (long long n = p; n <= q; n++)
    {
        long long sq = n * n;
        string s = to_string(sq);
        int d = to_string(n).size();

        string left = s.substr(0, s.size() - d);
        string right = s.substr(s.size() - d);

        long long l = left.empty() ? 0 : stoll(left);
        long long r = stoll(right);

        if (l + r == n)
            ans.push_back((int)n);
    }

    if (ans.empty())
    {
        cout << "INVALID RANGE";
    }
    else
    {
        for (size_t i = 0; i < ans.size(); i++)
        {
            if (i)
                cout << " ";
            cout << ans[i];
        }
    }
}