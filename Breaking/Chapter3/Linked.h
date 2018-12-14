#ifndef LINKED_H
#define LINKED_H

class Node
{
    private:
        Node next = NULL;
        int data;
    public:
        Node(int d);
        void appendToTail(int d);
        Node deleteNode(Node head, int d);
};
#endif /* LINKED_H*/
