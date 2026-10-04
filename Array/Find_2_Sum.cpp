class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector<int>ans;
        unordered_map<int, int>m;

        for(int i=0; i<arr.size();i++){
            int first = arr[i];
            int sec = tar - first;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }

        return ans;
    }
};
