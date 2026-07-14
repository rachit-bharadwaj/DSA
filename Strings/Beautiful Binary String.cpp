// Question: https://www.hackerrank.com/challenges/beautiful-binary-string/problem

// Difficulty: Easy

int beautifulBinaryString(string b)
{
    int steps = 0;

    for (int i = 0; i + 2 < (int)b.size(); i++)
    {
        if (b.substr(i, 3) == "010")
        {
            steps++;
            i += 2;
        }
    }

    return steps;
}