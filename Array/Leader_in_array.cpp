class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        vector<int> ans;
        int maximum = INT_MIN;

       for(int nums.size()-1; i>0;i--){
        if(nums[i]<INT_MIN){
            ans.pushback(nums[i]);
          
        }
        maximum = max(nums[i],maximum);
       }
        reverse(ans.begin,ans.end())
       
        return ans;
    }
};



 
