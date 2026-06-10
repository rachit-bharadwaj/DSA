// Question: https://www.hackerrank.com/challenges/simple-array-sum/problem

// Difficulty: Easy

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(int i=0; i<ar.size(); i++){
        sum += ar[i];
    }
    
    return sum;
}