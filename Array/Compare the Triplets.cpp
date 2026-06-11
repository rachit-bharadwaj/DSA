// Question: https://www.hackerrank.com/challenges/compare-the-triplets/problem

// Difficulty: Easy

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice=0,bob=0;
    vector<int> res;
    
    for(int i=0; i<a.size(); i++){
            if(a[i] > b[i] ) alice++;
            if (a[i] < b[i]) bob++;
        }
    res.push_back(alice);
    res.push_back(bob);
    
    return res;
}