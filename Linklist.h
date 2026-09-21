//LinkList.h (header file for the LinkList class and node struct)
#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    std::string data;
    Node* next;


    //contructor 
    Node(string data)
    {
        this->data = data;
        next = nullptr;
        
    };
};

class LinkList
{
private:
    Node* head;
    Node* tail;
public:
// default constructor and destructor and copy constructor
    LinkList();
    ~LinkList();
    LinkList(const LinkList& old);

// methods for the linked list
    //append and prepend
    void append(const string& data); 
    void prepend(const string& data);

    //search
    bool search (const string& data); 

    //removal
    bool remove(const string& data);
    bool removeBack(const string& data);

    //display 
    void display(ostream& out);
    void displayBack(ostream& out);

};
#endif