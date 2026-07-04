class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>mpp;

    for(auto num:nums){
        mpp[num]++;
      }
            
    vector<vector<int>>bucket(nums.size()+1);

    for(auto &it:mpp){
        int element=it.first;
        int count=it.second;
        bucket[count].push_back(element);
    }

    vector<int>ans;

    for(auto i=nums.size();i>=1 && ans.size()<k;i--){
        for(auto num:bucket[i]){
            ans.push_back(num);
        }
    }
    return ans;
    }
};
