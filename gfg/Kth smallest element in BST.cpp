//https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1#

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    vector<int>v;
    void inorder(Node*root){
        if (root==NULL) return ;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    int KthSmallestElement(Node *root, int K) {
        inorder(root);
        return (v.size()<K) ? -1 : v[K-1] ;
    }
};
