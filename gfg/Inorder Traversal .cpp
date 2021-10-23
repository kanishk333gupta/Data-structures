#https://practice.geeksforgeeks.org/problems/inorder-traversal/1/#

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void helper (Node* root , vector<int>&v){
        if(root!=NULL){
            helper(root->left,v);
            v.push_back(root->data);
            helper(root->right,v);
        }
}
    vector<int> inOrder(Node* root) {
        // Your code here
        // vector<int>v;
        // stack<Node*>s;
        // s.push(root);
        
        // while(!s.empty()){
        //     Node *curr = s.top();
        //     s.pop();
        //     v.push_back(curr->data);
        //     if(curr->left!=NULL) s.push(curr->left);
        //     if(curr->right!=NULL) s.push(curr->right);
            
        // }return v;
        
        vector<int>v;
        helper(root,v);
        return v;
        
    }
};
