Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

//solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        int i,j;
        vector<int> sol;
        for(i = 0 ; i < n ; i++)
        {
            for( j = i+1 ; j < n ; j++)
            {
                if(nums[i]+nums[j] == target)
                {
                   sol.push_back(i); 
                   sol.push_back(j); 
                    break;
                }
            }
        }
        
     return sol;  
    }
};
