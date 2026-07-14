// Question: https://www.hackerrank.com/challenges/permutation-equation/problem

// Difficulty: Easy

vector<int> permutationEquation(vector<int> p)
{
    int n = p.size();
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        pos[p[i]] = i + 1;
    }

    vector<int> result;
    for (int x = 1; x <= n; x++)
    {
        result.push_back(pos[pos[x]]);
    }

    return result;
}