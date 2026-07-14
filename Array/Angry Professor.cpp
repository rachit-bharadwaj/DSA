// Question: https://www.hackerrank.com/challenges/angry-professor/problem

// Difficulty: Easy

string angryProfessor(int k, vector<int> a)
{
    int onTime = 0;

    for (int t : a)
    {
        if (t <= 0)
            onTime++;
    }

    return (onTime < k) ? "YES" : "NO";
}