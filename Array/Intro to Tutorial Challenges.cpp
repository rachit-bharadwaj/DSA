// Question: https://www.hackerrank.com/challenges/tutorial-intro/problem

// Difficulty: Easy

int introTutorial(int V, vector<int> arr)
{
    for (int i = 0; i < (int)arr.size(); ++i)
    {
        if (arr[i] == V)
        {
            return i;
        }
    }
    return -1;
}