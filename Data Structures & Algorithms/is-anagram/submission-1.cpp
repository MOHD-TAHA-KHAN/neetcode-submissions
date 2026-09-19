class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int> freqs;
        unordered_map<char,int> freqt;
        for (char i : s) {
            freqs[i]++;
        }
        for(char j :t){
            freqt[j]++;
        }
        for(auto pair : freqs){
            char character =pair.first;
            int count = pair.second;
            if (freqt[character]!=count) {
                return false;
            }
        }
        return true;
    }
};
