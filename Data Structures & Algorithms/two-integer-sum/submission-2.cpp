class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        unordered_map<int,int>m;
        for(int k=0;k<n;k++){
           int i=target-nums[k];
           if(m.count(i)){
                return{m[i],k};
           }
          
           m[nums[k]]=k;
        }
        return {};
    }
};
