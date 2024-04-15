class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) { // 오름차순으로 정렬되어 있음!
        vector<int> ret;

        auto fr = numbers.begin();
        auto rr = numbers.end()-1;
        while(fr<rr){
            if(*fr + *rr == target){
                ret.push_back(distance(numbers.begin(), fr)+1);
                ret.push_back(distance(numbers.begin(), rr)+1);
                break;
            }

            if(*fr + *rr > target) rr--;
            else fr++;
        }

        return ret;
    }
};
