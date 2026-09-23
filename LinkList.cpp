#include "Linklist.h"
#include <iostream>




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

//Append and Prepend
    void LinkList::append(const string& data)
    {
        //create the newNode containing its data
        Node* tmp = new Node(data);
        tmp->prev = tail;

        //What if the list is empty
        if (head == nullptr)
        {
            head = tmp; 
        }
        //If not, append to tail
        else 
        {
            tail->next = tmp; 
        }
        tail = tmp;

    } 
    void LinkList::prepend(const string& data) 
    {
        Node* tmp = new Node(data);

        tmp->prev = nullptr;        

        //what if list is empty
        if(head == nullptr)
        { 
            tail = tmp; 
        }
        else
        {
            head->prev = tmp;
        }
        //if not, prepend before head
        tmp->next = head;  
        head = tmp;
    }

//Search
    bool LinkList::search (const string& data)
    {
      
        Node* tmp = head;
        //traverse through list with temporary pointer
        while (tmp != nullptr)
        {
            if (tmp->data == data)
            {
                return true;
            }
            tmp = tmp->next;
        }
        //if the list is empty or if the data is not found
        return false;
    }

//removal
    bool LinkList::remove(const string& data)
    {
        Node *tmp = head; // set the current node to the head
        Node *prev = nullptr; // set the previous node to nullptr

        while (tmp != nullptr) // loop while the node is still in the list
            {
                if (tmp->data == data) // if the data is found
                {
                    if (tmp == head) // check to see if we are deleting the head
                    {
                        head = tmp->next; // set head to the next node in the chain
                    }
                    else
                    {
                        prev->next = tmp->next; // set the previous node's next to the next node in the chain
                    }
                    if (tmp == tail) // check to see if we are deleting the tail
                    {
                        tail = prev; // set the tail to the previous node in the chain
                    }
                    delete tmp; // delete the current node
                    return true;
                }
                prev = tmp; // set the previous node to the current node 
                tmp = tmp->next; // set the current node to the next node in the chain
            }
            return false; // return false if the loop has exited without finding the data

    }
    bool LinkList::removeBack(const string& data)
    {

       return false;

    }

//display 
    void LinkList::display(ostream& out)
    {
        Node *tmp = head; // set the current tmp node to the head
        while (tmp != nullptr) // loop while the node is still in the list
        {
            out << tmp->data << endl; // output the data stored in the current node
            tmp = tmp->next; // set tmp to the next node in the chain 
        }
    }
    void LinkList::displayBack(ostream& out)
    {

    }
