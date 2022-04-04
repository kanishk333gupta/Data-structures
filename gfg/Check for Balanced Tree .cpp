//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if (root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return (max(lh,rh)+1);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL) return true;
      
       
        bool l1 = isBalanced(root->left);
        bool r1 = isBalanced(root->right);
        bool diff = (abs(height(root->left) - height(root->right)))<=1;

        if(l1 && r1 && diff) return true;
        return false;
            
            
        
    }
};