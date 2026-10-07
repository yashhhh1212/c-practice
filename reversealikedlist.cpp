#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class list
{
public:
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void pushatfront(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
    void pushatback(int val)
    {
        node *new_node = new node(val);
        if (tail == NULL)
        {
            tail = head = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    void pushatmid()
    {
        node *fast = head;
        node *slow = head;
        node *prev = slow;
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        node *new_node = new node(35);
        new_node->next = slow;
        prev->next = new_node;
    }
    void popatfront()
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void popatback()
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }
    void reverse()
    {
        node *prev = NULL;
        node *curr = head;
        node *nextval = NULL;
        while (curr != NULL)
        {
            nextval = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextval;
        }
    }
};
int main()
{
    list mylist;
    mylist.pushatfront(10);
    mylist.pushatfront(20);
    mylist.pushatfront(30);
    mylist.pushatfront(40);
    mylist.pushatback(80);
    mylist.pushatmid();
    mylist.popatfront();
    mylist.popatback();
    mylist.reverse();
    mylist.printll();
    return 0;
}
