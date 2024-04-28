namespace ran = std::ranges;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        ran::sort(nums);
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue; // i, fr, rr에서 i값이 이전과 같으면 skip (이미 탐색했기때문)
            int fr = i+1, rr = nums.size()-1;
            while (fr < rr) {
                int tot = nums[i] + nums[fr] + nums[rr];
                if (tot > 0) rr--;
                else if (tot < 0) fr++;
                else { // 딱 0
                    ret.push_back({nums[i], nums[fr], nums[rr]});
                    fr++; // 일단 변경은 시키고,
                    while (nums[fr] == nums[fr-1] && fr < rr) fr++; // fr(변경된 값)과 fr-1(else블럭 들어올 때의 fr값)이 같으면 skip. *뒤에 fr < rr 없으면 런타임 에러*
                }
            }
        }
        return ret;
    }
};
