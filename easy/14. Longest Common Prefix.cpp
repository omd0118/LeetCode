class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a = strs[0];
        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            while(s.find(a) != 0){ //判斷a是不是s的前綴
                a = a.substr(0,a.length() - 1);//每次扣除字串最後一個字
            }
        }
        return a;
    }
};
