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
};
int main()
{
list mylist;
mylist.pushatfront(10);
mylist.pushatfront(20);
mylist.pushatfront(30);
mylist.pushatfront(40);
mylist.pushatback(80);
mylist.printll();
    return 0;
}
