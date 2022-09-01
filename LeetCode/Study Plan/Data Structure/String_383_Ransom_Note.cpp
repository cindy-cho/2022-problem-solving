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