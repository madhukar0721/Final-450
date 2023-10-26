class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans = arr[0];
        long long currSum =0;
        
        for(int i =0;i<n;i++)
        {
            currSum += arr[i];
            
            if(currSum>ans)
                ans = currSum;
            if(currSum<=0)
                currSum=0;
            
        }
        
        return ans;
    }
};
