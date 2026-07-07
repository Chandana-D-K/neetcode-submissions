class Solution {
public:

    string encode(vector<string>& strs) {
        string c="";
        for(auto &s:strs){
            int length=s.size();
            c=c+to_string(length)+"#"+s;
        }
        return c;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j));
            result.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        return result;
    }
};
