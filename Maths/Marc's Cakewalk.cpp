// Question: https://www.hackerrank.com/challenges/marcs-cakewalk/problem

// Difficulty: Easy

long marcsCakewalk(vector<int> calorie)
{
    sort(calorie.rbegin(), calorie.rend());

    long long miles = 0;
    for (int i = 0; i < calorie.size(); i++)
    {
        miles += (long long)calorie[i] * (1LL << i);
    }

    return miles;
}