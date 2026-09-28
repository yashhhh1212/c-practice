#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *nextval;
    node(int val)
    {
        data = val;
        nextval = NULL;
    }
};
class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void pushaE(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            new_node->nextval = head;
            head = new_node;
        }
    }
    void pushatend(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            tail = head = new_node;
        }
        else
        {
            tail->nextval = new_node;
            tail = new_node;
        }
    }
    void mid()
    {
        node *fast = head;
        node *slow = head;
        node *prev = NULL;
        while (fast != NULL && fast->nextval != NULL)
        {
            prev = slow;
            slow=slow->nextval;
            fast=fast->nextval->nextval;
        }
        node *new_node = new node(6);
        new_node->nextval = slow;
        prev->nextval = new_node;
    }
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->nextval;
        }
        cout << "NULL";
    }
};
int main()
{
    list ll;
    ll.pushaE(5);
    ll.pushaE(5);
    ll.pushaE(5);
    ll.pushaE(1);
    ll.pushaE(5);
    ll.pushatend(6);
    ll.mid();
    ll.printll();

    return 0;
}
