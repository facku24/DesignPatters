#include "Linked.h"

Node::Node(int d)
{
    data = d;
}

void Node::appendToTail()
{
    Node end = new Node(d);
    Node n = this;
    while(n.next != NULL) { n = n.next;}
    n.next = end;
}

Node Node::deleteNode(Node head, int d)
{
    Node n = head;
    Node aux;

    if(n.data = d)
    {
        return head.next;       /* moved head*/
    }
    while(n.next != NULL)
    {
        if(n.next.data == d)
        {
            n.next = n.next.next;
            return head;        /* head didn't change*/
        }
    }
}
