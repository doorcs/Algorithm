// Date: Sat Apr 13 2024 16:58:40 GMT+0900 (Korean Standard Time)
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
