class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        vector<int>arr(26,0);
        for(char ch:s) arr[ch-'a']++;
        for(char ch:t) arr[ch-'a']--;

        for(auto count:arr){
            if(count!=0){
                return false;
            }
        }
        return true;

        // unordered_map<char,int>mpp;
        // for(char ch:s){
        //     mpp[ch]++;
        // }
        // for(char ch:t){
        //     mpp[ch]--;
        // }
        // for(auto count:mpp){
        //     if(count.second!=0){
        //         return false;
        //     }
        // }
        // return true;
    }
};
