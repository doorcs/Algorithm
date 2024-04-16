using ll = long long;
namespace ran = std::ranges;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ret;
        vector<pair<int, string>> vpis;
        for (int i=0; i<heights.size(); i++) vpis.push_back({heights[i], names[i]});

        ran::sort(vpis, [](const auto& a, const auto& b){
            return a.first > b.first;
        });

        for (const auto& [_, ans] : vpis) ret.push_back(ans);
    
        return ret;
    }
};
