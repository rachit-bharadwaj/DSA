// Question: https://www.hackerrank.com/challenges/smart-number/problem

// Difficulty: Easy

bool is_smart_number(int num)
{
    int val = (int)sqrt(num);
    if (val * val == num)
        return true;
    return false;
}