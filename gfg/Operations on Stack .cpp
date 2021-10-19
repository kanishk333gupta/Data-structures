#https://practice.geeksforgeeks.org/problems/operations-on-stack/1/#


int top =-1;
//Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
    top++;
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    s.pop();
    top--;
    //Your code here
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    // if(top==-1) return ;
    int x=s.top();//Your code here
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    bool exists=false;
    while(!s.empty()){
        if(s.top()==val)return true; 
        s.pop();
    }return false;
    
    if(exists==true){
        cout<<"Yes"<<" "<<endl;
        return true;
    }
    else{
        cout<<"No"<<" "<<endl;
        return false;
    }
}