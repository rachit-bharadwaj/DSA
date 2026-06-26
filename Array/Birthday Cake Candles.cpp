//  Question: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

//  Difficulty: Easy

int birthdayCakeCandles(vector<int> candles)
{
    int max = 0, count = 0;

    for (int c : candles)
    {
        if (c > max)
        {
            max = c;
            count = 0;
        }

        if (c == max)
        {
            count++;
        }
    }

    return count;
}