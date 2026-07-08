// Question: https://www.hackerrank.com/challenges/strange-advertising/problem

// Difficulty: Easy

int viralAdvertising(int n)
{
    int shared = 5;
    int liked = 0;
    int total = 0;

    for (int day = 1; day <= n; day++)
    {
        liked = shared / 2;
        total += liked;
        shared = liked * 3;
    }

    return total;
}