class Solution {
public:
    bool isPalindrome(string s) {
        string str{};
        for_each(s.begin(), s.end(), [&str](const auto& c){
            if(isalnum(c)) str += tolower(c);
        });

        if(str.size() < 2) return true;

        auto fr = str.begin();
        auto rr = str.end()-1;
        for(int i=0; i<str.size()/2; i++){
            if(*(fr+i) != *(rr-i)) return false;
        }

        return true;
    }
};
