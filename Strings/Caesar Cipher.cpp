// Question: https://www.hackerrank.com/challenges/caesar-cipher-1/problem

// Difficulty: Easy

string caesarCipher(string s, int k)
{
    k %= 26;

    for (char &c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = 'a' + (c - 'a' + k) % 26;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + (c - 'A' + k) % 26;
        }
    }

    return s;
}