class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n = str.size();
        for(int i =0;i<n/2;i++)
        {
            swap(str[i],str[n-1-i]);
        }
        return str;
    }
};
