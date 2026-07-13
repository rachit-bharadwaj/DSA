// Question: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

// Difficulty: Easy

string catAndMouse(int x, int y, int z)
{

    int distA = abs(x - z);
    int distB = abs(y - z);

    if (distA < distB)
        return "Cat A";
    if (distB < distA)
        return "Cat B";
    return "Mouse C";
}