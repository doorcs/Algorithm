class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> jumps(nums.size(), 0);
        jumps[0] = 0;

        for(int i=0; i<nums.size()-1; i++){
           for(int j=1; j<=nums[i]; j++){
               if(i+j >= nums.size()) continue;

               if(!jumps[i+j]) jumps[i+j] = jumps[i]+1; // jumps 배열에는 현재 index에 도달할 수 있는 최소 점프수가 저장됨
           }
        }

        return jumps[jumps.size()-1];
    }
};

// jumps 배열 모두 0으로 초기화
// for문으로 nums 배열 크기만큼 반복:
    // jumps 배열에서 현재 위치(idx) + nums[idx]까지의 값이 아직 0이라면, 현재 위치+1로 초기화 (현재 위치에는 최소 점프수가 저장되어있음!)

// TC 1:
// [0, 0, 0, 0, 0]
// [0, 1, 1, 0, 0]
// [0, 1, 1, 2, 2]

// TC 2:
// [0, 0, 0, 0, 0]
// [0, 1, 1, 0, 0]
// [0, 1, 1, 2, 2]
