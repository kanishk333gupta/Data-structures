https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/#

Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node * curr = head ;
	Node * middle = head->next ;
	while(middle!=NULL && middle->next!=NULL ){
	    curr=curr->next;
	    middle=middle->next->next;
	}
	Node * temp  = new Node(x);
	temp->next = curr->next;
	curr->next = temp ; 
	return head ;
}