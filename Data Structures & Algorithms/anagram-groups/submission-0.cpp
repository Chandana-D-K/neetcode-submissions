class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for (string s:strs){
            string temp=s;
            sort(s.begin(),s.end());
            mpp[s].push_back(temp);
        }

        vector<vector<string>>ans;
        for (auto i:mpp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
