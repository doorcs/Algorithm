// Date: Tue May 07 2024 00:00:00 GMT+0900 (Korean Standard Time)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// 트리노드의 배열로 이진 트리를 준 것.
// 중간 -> 왼쪽 -> 오른쪽(확인)

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 제일 아래에서부터 비교해야하므로 base case 설정 후 재귀호출!
        if (p == nullptr && q == nullptr) return true; // 두 파라미터(노드)가 모두 nullptr이면 true
        if (p == nullptr || q == nullptr) return false; // 조건문 안쪽이 (1. 양쪽 모두 nullptr, 2. 첫번째 파라미터만 nullptr, 3. 두번째 파라미터만 nullptr) 세가지 경우 모두 true지만, 양쪽 모두 nullptr인 경우는 미리 처리했기 때문에 둘 중 한 포인터만 nullptr일 때만 false를 return

        if (p->val != q->val) return false; // 두 포인터가 모두 nullptr이 아니고(뭔가를 가리키고 있고), 두 포인터가 가리키는 값이 다를 경우 true
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); // 두 포인터가 가리키는 값이 같을 경우 재귀호출
    }
};
