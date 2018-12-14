#ifndef STACK_H_
#define STACK_H_

class Stack
{
    public:
        Node top;
        Node pop();
        void push();
};

class Queue
{
    public:
        Node first, last
};

#endif // STACK_H_
