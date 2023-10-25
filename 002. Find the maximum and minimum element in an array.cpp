class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int ma=INT_MIN;
    	int mi = INT_MAX;
    	
    	for(int i =0;i<N;i++)
    	{
    	    ma=max(A[i],ma);
    	    mi= min(A[i],mi);
    	}
    	
    	return ma+mi;
    }

};
