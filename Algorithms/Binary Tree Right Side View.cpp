/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ret;
        if (root != NULL) {
            queue<TreeNode*> q;
            q.push(root);
            int curLevelSum = 1, cnt = 0;
            while(!q.empty()) {
                for(int i = 0; i < curLevelSum; i++) { //why set cnt = 0 here lead TLE ?
                    TreeNode* t = q.front();
                    if (t->left != NULL){
                        q.push(t->left);
                        cnt++;
                    }
                    if (t->right != NULL){
                        q.push(t->right);
                        cnt++;
                    }
                    if (i == curLevelSum - 1) {
                        ret.push_back(t->val);
                    }
                    q.pop();
                }
                curLevelSum = cnt;
                cnt = 0;
            }
        }
        return ret;
    }
};