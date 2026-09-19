class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int ts = t.size();
        int ss = s.size();
        if (ts != ss) {
            return false;
        }
        for (int i = 0; i <= ss; i++) {
            if (s[i]==t[i]) {
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
