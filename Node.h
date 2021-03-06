#include <iostream>
#include <thread>

#ifndef NODE_H
#define NODE_H

typedef void(*funcIn)(int);

class Node
{
    private:
        int memory;
        std::thread thisThread;
        bool free;

    public:
        Node(int capacity)
        {
            memory = capacity;
            free = true;
        }
        int getCap();
        bool isFree();
        void setThread(void(*func)());
        void setThread(void(*f)(int),int);
        //std::thread pass(void(*f)(int), int);
        void start();
};

#endif
