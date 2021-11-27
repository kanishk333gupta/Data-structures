#https://practice.geeksforgeeks.org/problems/level-order-traversal/1/#

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node*>q;
      q.push(node);
      vector<int>v;
      while(!q.empty()){
          Node* curr = q.front();
          q.pop();
          v.push_back(curr->data);
          if(curr->left!=NULL) q.push(curr->left);
          if(curr->right!=NULL) q.push(curr->right);
      }return v;
    }
};

