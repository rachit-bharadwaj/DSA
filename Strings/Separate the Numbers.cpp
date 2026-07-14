// Question: https://www.hackerrank.com/challenges/separate-the-numbers/problem

// Difficulty: Easy

void separateNumbers(string s)
{
    int n = s.size();

    for (int len = 1; len <= n / 2; len++)
    {
        if (s[0] == '0')
            break;

        long long first = stoll(s.substr(0, len));
        string built = "";
        long long curr = first;

        while (built.size() < n)
        {
            built += to_string(curr);
            curr++;
        }

        if (built == s)
        {
            cout << "YES " << first << "\n";
            return;
        }
    }

    cout << "NO\n";
}