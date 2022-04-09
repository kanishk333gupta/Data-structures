//https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#

class Solution
{
    public:
    int count = 0 ,ans =0 ;
    void inorder(Node*root ){
        if (root==NULL) return ;
        inorder(root->right);
        count--;
        if(0 == count) {
            ans = root->data;
            return;
        }
        inorder(root->left);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        // int ans = 0 ;
        count = k;
        inorder(root);
        return  ans;
    }
    
};
