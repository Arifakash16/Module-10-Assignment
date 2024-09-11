class Solution
{
    public:
    int findLowestElement(int ar[])
    {
        int n = sizeof(ar) / sizeof(ar[0]); // find the size of an array

        if (ar[0] <= ar[n - 1]) // if array is fully sorted no rotation is there so lowest value in 0th position
            return ar[0];

        int left=0,right=n-1; // initialize the left and right 

        while(left<=right) // to chech left is lesser or equal to right
        {
            int mid = left+(right-left)/2; // calculate the mid 
            
            if(ar[0]<=ar[mid]) // if mid value is lesser, so lowest value located on the right part 
                left=mid+1;   //  otherwise left part
            else
                right=mid-1;
        }
        return ar[left]; // return the lowest value
    
    }
};

// Time Complexity: O(log(n))
// Space Complexity: O(1)