class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size(); i++){
            int x = nums[i];

            int a = x*maxProd;
            int b = x*minProd;

            maxProd = max(x,max(a,b));
            minProd = min(x,min(a,b));

            ans = max(ans,maxProd);

        }
        return ans ;
        
    }
};
