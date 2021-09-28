#https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        //Code here
        Node * curr = head ;
        int count = 0 ;       
        while(curr!=NULL){
           count ++;
           curr = curr->next ;
       }return count;
    
    }
};