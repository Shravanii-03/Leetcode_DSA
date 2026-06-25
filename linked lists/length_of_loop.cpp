#brute
class solution{
public:
int lengthofloop(node* head){
unordered_set<node*, int>visited;
node* temp=head;
int count=0;
while(temp!=null){
if(visited.find(temp)!=visited.end()){
int length=count-visited[temp];

return length;
		  }

visited[temp]=count;
temp=temp->next;

count++; }
return 0;

  }
};



#optimal 
class solution{
public:
int count=1;
node* lengthofloop(node* head){
node* slow=head;
node* fast=head;

while(fast!=null && fast->next!=null){
slow=slow->next;
fast=fast->next->next;

if(slow==fast){
 Node* temp = slow;
while(temp!=slow){
temp=temp->next;
count++;}
return count;}
	}
   }
};