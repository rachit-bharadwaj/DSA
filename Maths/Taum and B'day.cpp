// Question: https://www.hackerrank.com/challenges/taum-and-bday/problem

// Difficulty: Easy

long taumBday(int b, int w, int bc, int wc, int z)
{
    long long blackCost = min((long long)bc, (long long)wc + z);
    long long whiteCost = min((long long)wc, (long long)bc + z);

    return (long long)b * blackCost + (long long)w * whiteCost;
}