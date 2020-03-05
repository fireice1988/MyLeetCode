//Design a max stack that supports push, pop, top, peekMax and popMax. 
//
// 
// 
// push(x) -- Push element x onto stack. 
// pop() -- Remove the element on top of the stack and return it. 
// top() -- Get the element on the top. 
// peekMax() -- Retrieve the maximum element in the stack. 
// popMax() -- Retrieve the maximum element in the stack, and remove it. If you 
//find more than one maximum elements, only remove the top-most one. 
// 
// 
//
// Example 1: 
// 
//MaxStack stack = new MaxStack();
//stack.push(5); 
//stack.push(1);
//stack.push(5);
//stack.top(); -> 5
//stack.popMax(); -> 5
//stack.top(); -> 1
//stack.peekMax(); -> 5
//stack.pop(); -> 1
//stack.top(); -> 5
// 
// 
//
// Note: 
// 
// -1e7 <= x <= 1e7 
// Number of operations won't exceed 10000. 
// The last four operations won't be called when stack is empty. 
// 
// Related Topics 设计


//leetcode submit region begin(Prohibit modification and deletion)
class node{
public:
    int num;
    node *next;
    node(int innum,node *innode){
        this->num = innum;
        this->next = innode;
    }
    node(int innum){
        this->num = innum;
        this->next = innode;
    }
    ~node(){
        delete this->next;
        this->next = NULL;
    }
};
class MaxStack {
public:
    node *head;
    int max;
    /** initialize your data structure here. */
    MaxStack() {
        head =NULL;
    }
    
    void push(int x) {
        if(head ==NULL)
        {
            node * temp =new node();
            temp->num = x;
            temp->next=NULL;
            head = temp;
        }
        else
        {
            node * temp =new node();
            temp->num = x;
            temp->next =head;
            head = temp;
        }
        if(x >= this->max)
        {
            this->max = x;
        }
    }
    
    int pop() {
        int output;
        if(head == NULL)
        {
            output = 0;
        }
        else(head->next != NULL)
        {
            output = head->num;
            head = head->next;
            delete head->next;
            //return output;
        }
        else
        {
            output = head->num;
            delete head;
            head = NULL;
            //return output;
        }
        node * tmp = head;
        while(tmp!= NULL)
        {
            if(max <= tmp->num) {
                max = tmp->num;
            }
            tmp = head->next;
        }
        return output;
    }
    
    int top() {
        if(head != NULL)
        {
            return  head->num;
        }
    }
    
    int peekMax() {
       return this->max;
    }
    
    int popMax() {
        node * tmp = head;
        while(tmp!= NULL)
        {
            if(max == tmp->num) {
                tmp=tmp->next;
            }
            tmp = head->next;
        }
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */
//leetcode submit region end(Prohibit modification and deletion)
