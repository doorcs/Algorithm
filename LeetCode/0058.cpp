class Solution {
 public:
  vector<string> split(string str, string delim) {
    vector<string> ret;
    size_t fr = 0, rr = str.find(delim);

    while (rr != string::npos) {
      ret.push_back(str.substr(fr, rr-fr));
      fr = rr + delim.size();
      rr = str.find(delim, fr);
    }
    ret.push_back(str.substr(fr));

    return ret;
  }

  int lengthOfLastWord(string s) {
    s.erase(s.find_last_not_of(" ")+1);
    auto tmp = split(s, " ");
    
    return tmp[tmp.size()-1].size();
  }
};
