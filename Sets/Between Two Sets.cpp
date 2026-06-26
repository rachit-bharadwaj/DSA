// Question: https://www.hackerrank.com/challenges/between-two-sets/problem

// Difficulty: Easy

int gcd_int(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int lcm_int(int a, int b) {
    return (a / gcd_int(a, b)) * b;
}

int getTotalX(vector<int> a, vector<int> b) {
    int lcmA = a[0];
    for (int i = 1; i < (int)a.size(); i++) {
        lcmA = lcm_int(lcmA, a[i]);
    }

    int gcdB = b[0];
    for (int i = 1; i < (int)b.size(); i++) {
        gcdB = gcd_int(gcdB, b[i]);
    }

    int count = 0;
    for (int x = lcmA; x <= gcdB; x += lcmA) {
        if (gcdB % x == 0) {
            count++;
        }
    }

    return count;
}