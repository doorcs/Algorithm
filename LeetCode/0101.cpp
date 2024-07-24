// Date: Sun May 12 2024 22:50:03 GMT+0900 (Korean Standard Time)

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

class Solution { // recursive solution
public:
    // 재귀로 풀려면 helper function이 필요하다!!!
    bool isSymmetricHelper(TreeNode* a, TreeNode* b) { // 좋은 변수명이 없을까..? 일반적으로 사용하는 변수명이 있나? uno, dos, tres, cuatro 같은걸 써볼까?
        if (a == nullptr && b == nullptr) return true;
        if (a == nullptr || b == nullptr) return false; // 논리and `&&`, 논리or `||`은 연산자 우선순위가 많이 낮다. 삼항 연산자, 할당문이 아니라면 같이 쓸 수 있다
        if (a->val != b->val) return false;
        // 위 두줄을 `if (a == nullptr || b == nullptr || a->val != b->val) return false;` 처럼 작성할수도 있다!

        return helper(a->right, b->left) && helper(a->left, b->right);
    }

    bool isSymmetric(TreeNode* root) {
        return isSymmetricHelper(root->left, root->right); // helper function을 호출
    }
};

/*
class Solution { // iterative solution (using queue)
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root->left); // root의 left, right를 큐에 넣고 시작
        q.push(root->right);
        
        while (!q.empty()) { // !q.size()를 쓸 수도 있지만, `.empty()` 메소드는 O(1)이 보장됨!
            auto a = q.front(); q.pop();
            auto b = q.front(); q.pop();

            if (a == nullptr && b == nullptr) continue;
            if (a == nullptr || b == nullptr || a->val != b->val) return false;

            q.push(a->left); q.push(b->right);
            q.push(a->right); q.push(b->left);
        }
        return true;
    }
};
*/
