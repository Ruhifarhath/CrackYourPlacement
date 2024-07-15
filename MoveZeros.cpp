283. Move Zeroes

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

  ```
  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return ;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
                nums[j]=nums[i];
                if(j!=i){
                     nums[i]=0;
                }
               
                j++;
            }
        }
    }
};

```

