// Question: https://www.hackerrank.com/challenges/bon-appetit/problem

// Difficulty: Easy

void bonAppetit(vector<int> bill, int k, int b)
{
    int annaBill = 0, diff = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        if (i != k)
            annaBill += bill[i];
    }

    annaBill = annaBill / 2;

    diff = b - annaBill;

    if (diff == 0)
        cout << "Bon Appetit" << endl;
    else
    {
        cout << diff << endl;
    }
}