    #include <iostream>
    using namespace std;
    class node{
        public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
    };
    class List{
        node* head;
        node* tail;
        public:
        List(){
        head=tail=NULL;
    }

    void pushatfront(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=tail=new_node;
            return;
        }
        else{
           new_node->next=head;
            head=new_node;
        }
    }

void printll(){
    node* temp=head;
    while(temp!=NULL){
cout << temp->data << " ";
temp=temp->next;
    }
    cout << "NULL" << endl;
}
    };
    int main() {
        List ll;
ll.pushatfront(1);
ll.pushatfront(2);
ll.pushatfront(3);
ll.pushatfront(4);
 ll.printll();
        return 0;
    }
