class node{
public:

int data;
node* next;

node(int x){
int data=data;
next=null;
}
};

class ll{
public:
node* top=head;

void push (int x){
node * temp=new node(x);
temp->next=top;
top=temp;
}

int pop(){
if(head==null) return -1;
node* temp=top;
head=head->next;
temp->next=null;
delete(temp);
}

int top(){
if(head==null){return -1}
return top->val;
}

bool isempty(){
if(head==null){
return true;
}
return false;

};