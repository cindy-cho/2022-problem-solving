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

// Runtime: 8 ms, faster than 82.56% / Memory Usage: 7.4 MB, less than 8.66%
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        vector<int> sCount (26,0), tCount(26,0);
        for(auto ch : s){
            sCount[ch-'a']++;
        }
        
        for(auto ch : t){
            tCount[ch-'a']++;
        }
        
        for(int i=0;i<26;i++) if(sCount[i] != tCount[i]) return false;
        
        return true;
    }
};