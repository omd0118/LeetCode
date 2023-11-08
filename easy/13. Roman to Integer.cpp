class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> j;
        j['I'] = 1;
        j['V'] = 5;
        j['X'] = 10;
        j['L'] = 50;
        j['C'] = 100;
        j['D'] = 500;
        j['M'] = 1000;

        int a = 0;
        for(int i = 0; i < s.length(); i++) {
            if(j[s[i]] < j[s[i+1]]) {
                a = a - j[s[i]];
            }
            else {
                a = a + j[s[i]];
            }
        }
        return a;
    }
};
