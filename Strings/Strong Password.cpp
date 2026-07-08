// Question: https://www.hackerrank.com/challenges/strong-password/problem

// Difficulty: Easy

int minimumNumber(int n, string password)
{
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    int missing = 0;

    bool hasDigit = false, hasLower = false, hasUpper = false, hasSpecial = false;

    for (char c : password)
    {
        if (numbers.find(c) != string::npos)
            hasDigit = true;
        else if (lower_case.find(c) != string::npos)
            hasLower = true;
        else if (upper_case.find(c) != string::npos)
            hasUpper = true;
        else if (special_characters.find(c) != string::npos)
            hasSpecial = true;
    }

    if (!hasDigit)
        missing++;
    if (!hasLower)
        missing++;
    if (!hasUpper)
        missing++;
    if (!hasSpecial)
        missing++;

    return max(missing, 6 - n);
}
