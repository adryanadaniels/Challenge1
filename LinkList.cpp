#include "Linklist.h"



//Construction and Destuction and Copy Constructor
LinkList::LinkList()
{
    head = nullptr;
    tail = nullptr;
}
LinkList::~LinkList()
{
    Node* curr = head;
    while (curr != nullptr)
    {
        Node* nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }
}
LinkList::LinkList(const LinkList& old)
{
    head = nullptr;
    tail = nullptr;

    Node* curr = old.head;
    while (curr != nullptr)
    {
        append(curr->data);
        curr = curr->next;
    }
}

//Methods for the linked list
//insert
    //insert data after the tail
    void LinkList::append(const string& data)
    {

    } 
    //insert data before the head
    void LinkList::prepend(const string& data) 
    {

    }


//search
    bool LinkList::search (const string& data)
    {

    }


//removal
    bool LinkList::remove(const string& data)
    {

    }
    bool LinkList::removeBack(const string& data)
    {

    }



//display 
    void LinkList::display(ostream& out)
    {

    }
    void LinkList::diplayBack(ostream& out)
    {

    }
