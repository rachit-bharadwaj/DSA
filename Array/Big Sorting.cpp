// Question: https://www.hackerrank.com/challenges/big-sorting/problem

// Difficulty: Easy

vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });
    
    return unsorted;
}
