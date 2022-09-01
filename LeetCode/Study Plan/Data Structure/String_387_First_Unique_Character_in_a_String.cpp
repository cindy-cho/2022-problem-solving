class Solution {
public:
    int firstUniqChar(string s) {
        int sLen = s.length();
        int idx;
        vector<int> charCount(26,-1);
        for(int i=0;i<sLen;i++){
            idx = s[i]-'a';
            if(charCount[idx] == -1) {
                charCount[idx] = count(s.begin(), s.end(), s[i]);
                if(charCount[idx] == 1) return i;
            }
            else continue;
        }
        return -1;
    }
};