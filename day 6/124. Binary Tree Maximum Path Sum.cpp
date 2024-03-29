class Solution {
public:
    int solve(TreeNode* root , int &ans)
    {
        if(root == NULL)
            return 0;

        int leftSum = max(0 , solve(root->left  , ans));
        int rightSum = max(0 , solve(root->right , ans) );
        
        ans = max(ans , leftSum + rightSum + root->val);

        return root->val + max(leftSum , rightSum);
    }

    int maxPathSum(TreeNode* root) {

        int ans = INT_MIN;
        solve(root , ans);
        return ans;
    }
};