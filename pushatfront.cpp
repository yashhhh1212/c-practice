#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next_val;
    node(int val){
        data=val;
        next_val=NULL;
    }
};
class linkedl{
node* head;
node*tail;
public:
linkedl(){
    head=tail=NULL;
}
void pushatfront(int val){
node* new_node=new node(val);
if(head==NULL){
    head=tail=new_node;
}
else{
    new_node->next_val=head;
    head=new_node;
}
}
void printll(){
    node*temp=head;
while(temp!=NULL){
        cout << temp->data<<"->";
        temp=temp->next_val;
    }
    cout << "NULL";
}
};
int main(){
 linkedl list;
 list.pushatfront(2);
  list.pushatfront(3);
 list.pushatfront(4);
 list.pushatfront(5);
   list.pushatfront(6);
   list.printll();


    return 0;
}
