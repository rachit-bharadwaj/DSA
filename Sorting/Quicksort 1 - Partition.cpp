// Question: https://www.hackerrank.com/challenges/quicksort1/problem

// Difficulty: Easy

vector<int> quickSort(vector<int> arr) {
    vector<int> left, right;
    int pivot = arr[0];
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i] < pivot) left.push_back(arr[i]);
        
        else{
            right.push_back(arr[i]);
        }
    }
    
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    
    return left;
}