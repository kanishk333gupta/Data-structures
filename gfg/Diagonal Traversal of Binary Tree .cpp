//https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1#

vector<int> diagonal(Node *root)
{
   // your code here
   Node* p ; 
   vector<int>v;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       p = q.front();
       q.pop();
       while(p){
           if(p->left) q.push(p->left);
           v.push_back(p->data);
           p = p->right;
       }
   }return v;
   
}