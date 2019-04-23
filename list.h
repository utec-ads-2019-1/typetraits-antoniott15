#ifndef LIST_H
#define LIST_H

#include "node.h"

template <typename Tr>
class List
{
public:
    typedef typename Tr::T T;
    typedef typename Tr::Operation Operation;

private:
    Node<T> *head;
    Operation cmp;

public:
    List() : head(nullptr){};

    bool find(T search, Node<T> **&pointer)
    {
        pointer = &head;
        while (*pointer && cmp(search, (*pointer)->data))
        {

            if (search == (*pointer)->data)
            {
                return true;
            }
            pointer = &((*pointer)->next);
        }
        return false;
    }

    bool insert(T data)
    {
        // TODO
    }

    bool remove(T item)
    {
        // TODO
    }

    int size()
    {
        // TODO
    }

    T operator[](int index)
    {
        // TODO
    }

    ~List()
    {
        // TODO
    }
};

#endif