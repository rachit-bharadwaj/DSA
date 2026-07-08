// Question: https://www.hackerrank.com/challenges/day-of-the-programmer/problem

// Difficulty: Easy

string dayOfProgrammer(int year)
{
    if (year == 1918)
    {
        return "26.09.1918";
    }

    bool leap = false;
    if (year < 1918)
    {
        leap = (year % 4 == 0);
    }
    else
    {
        leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    if (leap)
        return "12.09." + to_string(year);
    return "13.09." + to_string(year);
}