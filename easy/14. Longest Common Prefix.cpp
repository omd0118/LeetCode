class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string a = strs[0];
        for (string s : strs){
            while(s.find(a) != 0){
                a = a.substr(0,a.length()-1);
            }
        }
        return a;
    }
};
