// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-grading/problem

// Difficulty: Easy

int nextMultipleOf5(int n)
{
    return n + (5 - n % 5) % 5;
}

vector<int> gradingStudents(vector<int> grades)
{

    for (int i = 0; i < grades.size(); i++)
    {
        if (((nextMultipleOf5(grades[i]) - grades[i]) < 3) && grades[i] >= 38)
        {
            grades[i] = nextMultipleOf5(grades[i]);
        }
    }

    return grades;
}