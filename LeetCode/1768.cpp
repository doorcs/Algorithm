class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string ret;
    size_t sz1 = word1.size(), sz2 = word2.size();
    size_t rep = (sz1 > sz2 ? sz2 : sz1);
    for (size_t i = 0; i < rep; i++) {
      ret.push_back(word1[i]);
      ret.push_back(word2[i]);
    }
    if (rep == sz1) {
      ret += word2.substr(rep);
    } else {
      ret += word1.substr(rep);
    }
    return ret;
  }
};
