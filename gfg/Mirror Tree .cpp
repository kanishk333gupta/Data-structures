//https://practice.geeksforgeeks.org/problems/mirror-tree/1

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node ==NULL) return;
        else{
        
        mirror(node->left);
        mirror(node->right);
        
        Node * temp = node->left;
        node->left=node->right;
        node->right = temp ;
        
            
        }        
        
    }
};