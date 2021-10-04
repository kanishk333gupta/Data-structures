#https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/#


int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       Node *curr=head;
       int count = 0 ;
       
       while (curr!=NULL){
           count++;
           curr = curr->next ;
       }
       curr = head ;
       if(n > count) return -1 ;
          for (int i = 0 ; i < count - n ; i++){
              curr = curr->next ;
          }return curr->data ;
}