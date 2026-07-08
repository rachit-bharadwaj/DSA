// Question: https://www.hackerrank.com/challenges/time-conversion/problem

// Difficulty: Easy

string timeConversion(string s)
{

    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));

    if (period == "AM")
    {
        if (hour == 12)
            hour = 0;
    }
    else
    {
        if (hour != 12)
            hour += 12;
    }

    string result = (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
    return result;
}