//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1##fromHistory

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node* root, vector<int>&v){
        if(root==NULL)return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    void inBST(Node* root, vector<int>&v , int &i){
        // int i = 0 ;
        if(root==NULL) return;
        inBST(root->left,v,i);
        root->data = v[i];
        i++;
        inBST(root->right,v,i);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here'
        int i = 0 ;
        vector<int>v;
        inorder(root,v);
        sort(v.begin(),v.end());
        inBST(root,v,i);
        return root;
    }
};