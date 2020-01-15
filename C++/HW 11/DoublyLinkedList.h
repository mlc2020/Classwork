#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

//////////////////////////////////////////////////////////////////////////////
//                         class template definition                        //
//////////////////////////////////////////////////////////////////////////////

template<typename T>
class DoublyLinkedList {
public:
    /* uncomment the declarations as you implement them */
     DoublyLinkedList();
     DoublyLinkedList(T data);
     DoublyLinkedList(const DoublyLinkedList<T>& copy_list);
     DoublyLinkedList<T>& operator=(const DoublyLinkedList<T>& copy_list);
     ~DoublyLinkedList();
     unsigned int size() const { return sz; }
     T& front() { return head->data; }
     const T& front() const {return head->data;}
     T& back() {return tail->data;}
     const T& back() const {return tail->data;}
     void push_back(T data);
     void push_front(T data);
     void pop_back();
     void pop_front();
     void erase(unsigned int idx);
     void insert(T data, unsigned int idx);
     void clear();
    std::string to_str() const;
    // breaks encapsulation... gives operator== access to private data... not great approach, but makes the homework easier for you since we haven't talked about iterators :).
     template<typename U> friend bool operator==(DoublyLinkedList<U> const& lhs, DoublyLinkedList<U> const& rhs);
private:
    // do not change ordering.
    Node<T> *head;
    Node<T> *tail;
    unsigned int sz;
};

//////////////////////////////////////////////////////////////////////////////
//                       helper function declarations                       //
//////////////////////////////////////////////////////////////////////////////
template<typename T> std::ostream& operator<<(std::ostream &os, DoublyLinkedList<T> const&rhs);

template<typename T> bool operator!=(DoublyLinkedList<T> const&, DoublyLinkedList<T> const&);

//////////////////////////////////////////////////////////////////////////////
//                     member template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head{nullptr}, tail{nullptr}, sz{0} {}

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList(T data) : head{nullptr}, tail{nullptr}, sz{0}{
    auto new_node = new Node<T>(data);
    head = new_node;
    tail = new_node;
    ++sz;
}

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList<T> &copy_list) : head{nullptr}, tail{nullptr}, sz{0} {
    if (copy_list.size() == 0) {
        return;
    }
    auto new_node = new Node<T>(copy_list.front());
    head = new_node;
    ++sz;
    if (copy_list.size() == 1) {
        tail = new_node;
    } else {
        Node<T>* n = head;
        Node<T>* previous = head;
        Node<T>* o = copy_list.head -> next;
        while (o != nullptr) {
            auto copy_node = new Node<T>(o->data);
            n-> next = copy_node;
            n = n->next;
            n -> prev = previous;
            previous = previous->next;
            o = o->next;
            ++sz;
        }
        tail = n;
    }
}

template<typename T>
DoublyLinkedList<T>& DoublyLinkedList<T>::operator=(const DoublyLinkedList<T> &copy_list) {
    if (copy_list.size() == 0) {
        this->clear();
        return *this;
    } else {
        this -> clear();
        auto new_node = new Node<T>(copy_list.front());
        head = new_node;
        ++sz;
        if (copy_list.size() == 1) {
            tail = new_node;
        } else {
            Node<T>* n = head;
            Node<T>* previous = head;
            Node<T>* o = copy_list.head -> next;
            while (o != nullptr) {
                auto copy_node = new Node<T>(o->data);
                n-> next = copy_node;
                n = n->next;
                n -> prev = previous;
                previous = previous->next;
                o = o->next;
                ++sz;
            }
            tail = n;
        }
    }
    return *this;
}

template<typename T>
void DoublyLinkedList<T>::clear() {
    if (sz == 0) {
        head = nullptr;
        tail = nullptr;
    } else {
        Node<T>* n = head;
        Node<T>* nextt;
        head = nullptr;
        while (n != nullptr) {
            nextt = n -> next;
            delete n;
            n = nextt;
        }
        tail = nullptr;
        sz = 0;
    }
}

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    this->clear();
}

template<typename T>
void DoublyLinkedList<T>::push_back(T data) {
    auto new_node = new Node<T>(data);
    if (sz == 0) {
        head = new_node;
        tail = new_node;
        ++sz;
        return;
    }
    tail -> next = new_node;
    new_node -> prev = tail;
    tail = new_node;
    ++sz;
}

template<typename T>
void DoublyLinkedList<T>::push_front(T data) {
    auto new_node = new Node<T>(data);
    if (sz == 0) {
        head = new_node;
        tail = new_node;
        ++sz;
        return;
    }
    new_node -> next = head;
    head -> prev = new_node;
    head = new_node;
    ++sz;
}

template<typename T>
void DoublyLinkedList<T>::pop_back(){
    --sz;
    if (sz <= 0) {
        this ->clear();
        return;
    }
    tail = tail -> prev;
    delete tail->next;
    tail ->next = nullptr;
}

template<typename T>
void DoublyLinkedList<T>::pop_front() {
    --sz;
    if (sz <= 0) {
        this ->clear();
        return;
    }
    head = head ->next;
    delete head ->prev;
    head -> prev = nullptr;
}

template<typename T>
void DoublyLinkedList<T>::insert(T data, unsigned int idx){
    if(idx >= sz){
        return;
    }
    else if(head == nullptr){
        Node<T>* n = new Node<T>(data);
        head = n;
        tail = n;
        sz = sz+1;
    }
    else if(idx == 0){
        Node<T>* n = new Node<T>(data);
        n->next = head;
        n->prev = nullptr;
        head->prev = n;
        head = n;
        sz=sz+1;
    }
    else{
        Node<T>* n = new Node<T>(data);
        Node<T>* x = head; //this is the declaration for newnode
        unsigned int i=0;
        while(i!=idx && x!=nullptr)
        {
            i=i+1;
            x=x->next;
        }
        x->prev->next = n;
        n->prev = x->prev;
        x->prev = n;
        n ->next = x;
        sz=sz+1;
    }
}

template<typename T>
void DoublyLinkedList<T>::erase(unsigned int idx) {
    if(sz<=idx){
        return;
    }
    else if(head==tail){
        pop_front();
    }
    else if(head==nullptr){
        return;
    }
    else if(idx==0){
        Node<T> *n = head->next;
        n->next = head->next->next;
        n->prev=nullptr;
        delete head;
        head=n;
    }
    else if(idx==sz-1){
        Node<T> *n = tail->prev;
        n->prev = tail->prev->prev;
        n->next=nullptr;
        delete tail;
        tail=n;
    }
    else{
        int x=0;
        Node<T> *n = head;
        while(idx>x){
            x=x+1;
            n=n->next;
        }
        n->prev->next = n->next;
        n->next->prev = n->prev;
        delete n;
    }
    sz=sz-1;
}

template<typename T>
std::string DoublyLinkedList<T>::to_str() const
{
    std::stringstream os;
    const Node<T> *curr = head;
    os << std::endl << std::setfill('-') << std::setw(80) << '-' << std::setfill(' ') << std::endl;
    os << "head: " << head << std::endl;
    os << "tail: " << tail << std::endl;
    os << "  sz: " << sz << std::endl;
    os << std::setw(16) << "node" << std::setw(16) << "node.prev" << std::setw(16) << "node.data" <<  std::setw(16) << "node.next" << std::endl;
    while (curr) {
        os << std::setw(16) << curr;
        os << std::setw(16) << curr->prev;
        os << std::setw(16) << curr->data;
        os << std::setw(16) << curr->next;
        os << std::endl;
        curr = curr->next;
    }
    os << std::setfill('-') << std::setw(80) << '-' << std::setfill(' ') << std::endl;
    return os.str();
}

//////////////////////////////////////////////////////////////////////////////
//                     helper template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
bool operator==(DoublyLinkedList<T> const& lhs, DoublyLinkedList<T> const& rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    } else {
        if (lhs.size() == 0 && rhs.size() == 0) {
            return true;
        }
        Node<T>* n = lhs.head;
        Node<T>* o = rhs.head;
        while (n != nullptr && o != nullptr) {
            if (n != o) {
                return false;
            } else {
                n = n->next;
                o = o->next;
            }
        }
        if (n == nullptr && o == nullptr) {
            // getting you started on this once... definition for this overloaded operator will go here.
            return true;
        }
    }
}

template<typename T>
bool operator!=(DoublyLinkedList<T> const& lhs, DoublyLinkedList<T> const& rhs) {
    if (lhs.size() != rhs.size()) {
        return true;
    } else {
        if (lhs.size() == 0 && rhs.size() == 0) {
            return false;
        }
        Node<T>* n = lhs.head;
        Node<T>* o = rhs.head;
        while (n != nullptr && o != nullptr) {
            if (n != o) {
                return true;
            } else {
                n = n->next;
                o = o->next;
            }
        }
        if (n == nullptr && o == nullptr) {
            // getting you started on this once... definition for this overloaded operator will go here.
            return false;
        }
    }
}

template<typename T>
std::ostream& operator<<(std::ostream& os, DoublyLinkedList<T> const& rhs)
{
    os << rhs.to_str();
    return os;
}

#endif
