#https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/#

int size ;
void MyStack ::push(int x) 
{
    // Your Code
    // if(top==NULL) return ;
    StackNode *temp = new StackNode(x);
    temp->next = top ;
    top = temp ;
    // return top->data ;
    // size++;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==NULL) return -1;
    StackNode *temp = top ;
    top=top->next;
    int data = temp->data;
    delete(temp);
    // size--;
    return data ;    
}
