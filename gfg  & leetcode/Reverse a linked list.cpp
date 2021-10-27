#https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head->next==NULL) return head;
        Node *curr=head ;
        //Node *next=NULL;
        Node *prev=NULL;
        
        while(curr!=NULL){
            Node *next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }//prev = prev->next;
        return prev;
        
    }
    
};

