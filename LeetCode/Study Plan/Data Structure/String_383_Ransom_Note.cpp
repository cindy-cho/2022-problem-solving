//  Runtime: 43 ms, faster than 17.84% / Memory Usage: 8.9 MB, less than 40.12%
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransomCount (26,0), magazineCount(26,0);
        char tmp;
        for(int i=0;i<26;i++){
            tmp = 'a' + i;
            ransomCount[i] = count(ransomNote.begin(), ransomNote.end(), tmp);
            magazineCount[i] = count(magazine.begin(), magazine.end(), tmp);
            if(ransomCount[i] > magazineCount[i]) return false;
        }
        
        return true;
    }
};

// Runtime: 8 ms, faster than 97.75% / Memory Usage: 8.6 MB, less than 89.99%
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransomCount (26,0), magazineCount(26,0);
        for(auto ch : ransomNote){
            ransomCount[ch-'a']++;
        }
        
        for(auto ch : magazine){
            magazineCount[ch-'a']++;
        }
        
        for(int i=0;i<26;i++) if(ransomCount[i] > magazineCount[i]) return false;
        
        return true;
    }
};