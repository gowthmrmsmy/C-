class Solution {
public:
    int maxProduct(vector<int>& nums) {
      
    int firstlarg = nums[0];
    int seclarg = INT_MIN;

    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]> firstlarg)
        {   
             seclarg = firstlarg;
            firstlarg = nums[i];
           
        }
        else if (nums[i] > seclarg)
        {
            seclarg= nums[i];
        }
        
    }
    return (firstlarg -1) *(seclarg -1);
        
    }      
};