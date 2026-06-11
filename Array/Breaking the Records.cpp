// Question: https://www.hackerrank.com/challenges/three-month-preparation-kit-breaking-best-and-worst-records/problem

// Difficulty: Easy

vector<int> breakingRecords(vector<int> scores) {
    
    int max=scores[0], min=scores[0], record_min=0, record_max=0;
    vector<int> ans;
    
    for(int i=0; i<scores.size(); i++){
        
        if(scores[i] > max) {
             max = scores[i];
             record_max++;
        }
       
        if(scores[i] < min){
            min = scores[i];
            record_min++;
        } 
    }
    
    ans.push_back(record_max);
    ans.push_back(record_min);
    
    return ans;

}