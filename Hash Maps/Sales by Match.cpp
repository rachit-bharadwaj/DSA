// Question: https://www.hackerrank.com/challenges/sock-merchant/problem

// Difficulty: Easy


int sockMerchant(int n, vector<int> ar) {
    
    unordered_map<int, int> um;
    
    for(int i=0; i<n; i++){
        um[ar[i]]++;
    }
    
    int pairs = 0;
    
    for(auto& [color, count]: um){
        pairs += count/2;
    }
    
    return pairs;
}