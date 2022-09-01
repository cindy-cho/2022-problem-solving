// Runtime: 30 ms, faster than 7.81% / Memory Usage: 7.3 MB, less than 47.98%
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int sLen = s.length();
        for(int i=0;i<sLen;i++){
            if(s[i] != t[i]) return false;
        }
        
        return true;
    }
};