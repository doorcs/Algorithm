class Solution {
public:
  vector<string> split(string s, string delim) {
    vector<string> ret;
    size_t fr = 0, rr = s.find(delim);
    while (rr != string::npos) {
      if (fr != rr) ret.push_back(s.substr(fr, rr-fr));
      fr = rr + delim.size();
      rr = s.find(delim, fr);
    }
    ret.push_back(s.substr(fr));
    return ret;
  }

  string reverseWords(string s) {
    s.erase(s.find_last_not_of(" \t\n\r\f\v")+1); // Rtrim
    auto splitted = split(s, " ");
    ranges::reverse(splitted);
    
    string ret;
    for (const auto& it : splitted) ret += it + ' ';
    ret.pop_back(); // 맨 뒤 공백 제거
    return ret;
  }
};
