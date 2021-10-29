#https://practice.geeksforgeeks.org/problems/postorder-traversal/1/

void helper(Node* root, vector<int>&v){
    if(root!=NULL){
        helper(root->left,v);
        helper(root->right,v);
        v.push_back(root->data);
    }
}


vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>v;
  helper(root,v);
  return v;
  
}
