#https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1#



class Solution
{
    public:
    void Diff(Node *root, int K, int &abMin){
        if(root!=NULL){
            abMin = min(abMin, abs(K - root->data));
            if(root->data > K) Diff(root->left, K, abMin);
            else Diff(root->right, K, abMin);
        }
    }
    
    int minDiff(Node *root, int k){
        int abMin = INT_MAX;
        Diff(root, k, abMin);
        return abMin;
    }
};
