// Question: https://www.hackerrank.com/challenges/the-time-in-words/problem

// Difficulty: Medium

string timeInWords(int h, int m)
{
    static const string nums[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter",
        "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one",
        "twenty two", "twenty three", "twenty four", "twenty five", "twenty six",
        "twenty seven", "twenty eight", "twenty nine", "half"};

    if (m == 0)
    {
        return nums[h] + " o' clock";
    }
    else if (m == 1)
    {
        return "one minute past " + nums[h];
    }
    else if (m == 15)
    {
        return "quarter past " + nums[h];
    }
    else if (m == 30)
    {
        return "half past " + nums[h];
    }
    else if (m < 30)
    {
        return nums[m] + " minutes past " + nums[h];
    }
    else
    {
        int rem = 60 - m;
        if (rem == 1)
        {
            return "one minute to " + nums[h + 1];
        }
        else if (rem == 15)
        {
            return "quarter to " + nums[h + 1];
        }
        else
        {
            return nums[rem] + " minutes to " + nums[h + 1];
        }
    }
}