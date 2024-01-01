// Question: https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1


// { Driver Code Starts
int n = nums.size(), count = 0;
if (n % 2 == 1)
    return false;
vector<int> rem(k, 0);
for (int i = 0; i < n; i++)
{
    rem[nums[i] % k]++;
}
if (rem[0] % 2 == 1)
    return false;
for (int i = 1; i < k / 2; i++)
{
    if (rem[i] != rem[k - i])
        return false;
}
return true;
}
//} Driver Code Ends