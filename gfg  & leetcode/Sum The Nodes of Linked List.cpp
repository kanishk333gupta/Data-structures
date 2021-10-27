#https://practice.geeksforgeeks.org/problems/sum-the-nodes-of-linked-list/1/#


int sumOfElements(Node *head)
{
   int sum =0 ;
   Node * curr = head ;
   while (curr!= NULL){
       sum += curr->data;
       curr = curr -> next ; 
   }
   return sum ;
}
