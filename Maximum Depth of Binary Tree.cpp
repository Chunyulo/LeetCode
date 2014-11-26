/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode *root) {
        int ret = 0;
        queue<TreeNode *> q;

        if(!root){
        	q.push(root);
        	ret = 0;

        	int cnt=1,t=0;
        	TreeNode *tt;
        	while(q.empty()){
        		for(int i=0;i<cnt;i++){
        			tt = q.front();
        			if(tt->left){
        				q.push(tt->left);
        				t++;
        			}
        			if(tt->right){
        				q.push(tt->right);
        				t++;
        			}
        			q.pop();
        		}
        		cnt = t, t = 0 , ret++;
        	}
        }
        return ret;
    }

    int maxDepthRecursion(TreeNode *root){
    	if(!root) return 0;
        if(!root->left && !root->right)
            return 1;
        else if(root->left && root->right)
            return max(maxDepth(root->left),maxDepth(root->right))+1;
        else if(!root->left && root->right)
            return maxDepth(root->right)+1;
        else
            return maxDepth(root->left)+1;  
    }
};