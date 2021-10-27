#https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1/#

void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *temp = new QueueNode(x);
        if(rear==NULL) {
            front=rear=temp;
            return;
        }
        else {
            rear->next=temp;
            rear=temp;
        }
}
//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code
        if(front==NULL) return-1;
        else if (front==rear){
            QueueNode *temp = front ;
            front=rear=NULL;
            int a = temp->data;
            delete(temp);
            return a;
        }else{
            QueueNode *temp = front ;
            front=front->next ;
            int a = temp->data;
            delete(temp);
            return a;
        }

}