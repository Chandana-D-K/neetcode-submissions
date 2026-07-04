class Solution {
public:
    bool help(string s,string t){
        unordered_map<char,char>mpp;
        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])!=mpp.end()){
                 if(mpp[s[i]]!=t[i]){
                    return false;
                }
        }
        mpp[s[i]]=t[i];
        }
        return true;
    }

    bool isIsomorphic(string s, string t) {
        return help(s,t) && help(t,s);
    }
};