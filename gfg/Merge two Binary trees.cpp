class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return NULL ;
         if(!root1 || !root2) return root1? root1:root2;
        stack<TreeNode*>s1,s2;
        s1.push(root1);
        s2.push(root2);
        while(!s1.empty()){
            TreeNode* a=s1.top();            
            TreeNode* b=s2.top();
            s1.pop();s2.pop();
            a->val+=b->val;
            if(a->right==NULL && b->right!=NULL)a->right=b->right;
            else if(a->right!=NULL && b->right!=NULL) {
                s1.push(a->right);
                s2.push(b->right);
            }
            if(a->left==NULL&&b->left!=NULL)a->left=b->left;
            else if(a->left!=NULL && b->left!=NULL) {
                s1.push(a->left);
                s2.push(b->left);
            }
        }return root1;

    }
};