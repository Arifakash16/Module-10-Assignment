class Solution
{
    public:
    int findTargetElement(int ar[],int target)
    {
        int n = sizeof(ar) / sizeof(ar[0]); // find the size of an array

        int left=0,right=n-1; // initialize the left and right 

        while(left<=right) // to chech left is lesser or equal to right
        {
            int mid = left+(right-left)/2; // calculate the mid 
            if(ar[mid]==target) // to check target value is found or not, if it is found return mid
                return mid;
            if(ar[mid]>target) // if target value is lesser then set the right position 
                right=mid-1;   // into mid otherwise left position
            else
                left=mid+1;
        }
        return -1; // if it is not found return -1
    
    }
};

// Time Complexity: O(log(n))
// Space Complexity: O(1)