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
class Solution {
private:
    vector<int> nums;
    int ans;
    void init(){
        nums.resize(9,0);
        ans = 0;
    }
    
public:
    void visit(TreeNode* crnt){
        if(!crnt) return;
        nums[(crnt->val)-1] ++;
        
        if(!crnt->right && !crnt->left){
            int count = 0;
            for(int i=0;i<9;i++){
                if(nums[i] %2 == 1) count ++;
            }
            if(count<=1) ans++;
        }
        
        visit(crnt->left);
        visit(crnt->right);
        
        nums[(crnt->val)-1] --;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        init();
        visit(root);
        return ans;
    }
};