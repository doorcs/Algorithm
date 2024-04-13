class Solution {
public:
    bool isSubsequence(string s, string t) {
        int curr{};
        for(const auto& ch: t){
            if(ch == s[curr]) curr++;
        }

        if(curr == s.size()) return true;
        else return false;
    }
};
