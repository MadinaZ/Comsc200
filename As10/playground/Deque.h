//
//  Deque.h
//  As10
//
//  Created by Madina Sadirmekova on 5/5/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Deque_h
#define Deque_h

template<class T>
class Node  {
public:
    T data;
    Node<T> *prev, *next;
    static Node<T>* getnode(int data) {
        Node<T>* n = new Node<T>;
        n->data = data;
        n->prev = n->next = nullptr;
        return n;
    }
};

// A doubly linked list deque
template<class T>
class Deque {
    Node<T> *head, *tail, *copy;
    int size;
    T dummy = T();
    
    // deep copy helper, this private helper creates a local duplicated Deque pointed by *copy
    void deepCopy( const Deque<T> & rhs );
public:
    Deque():head(nullptr), tail(nullptr), size(0) { }
    Deque( const Deque<T> & rhs ); // copy constructor
    Deque( Deque<T> && rhs );        // move constructor
    
    Deque<T> & operator= ( Deque<T> & rhs ); // copy operator=
    Deque<T> & operator= ( Deque<T> && rhs ); // move operator=
    
    // Operations on Deque
    void pushHead(T data);
    void pushTail(T data);
    void popHead();
    void popTail();

    void erase();
    T getFront();
    T getRear();
    int _size() { return size; }
    bool isEmpty() { return !head; }
    T& operator[] (const int &sub);
};

template<class T>
Deque<T>::Deque(const Deque<T> &rhs) //copy constructor
{
    head = nullptr;
    tail = nullptr;
    size = 0;
    deepCopy(rhs);
}

template <class T>
Deque<T>::Deque( Deque<T> && rhs ) : head(nullptr),tail(nullptr), size(0)

{
    head = rhs.head;
    size = rhs.size;
    tail = rhs.tail;
    copy = rhs.copy;
    rhs.head = nullptr;
    rhs.size = 0;
    rhs.tail = nullptr;
    rhs.copy = nullptr;
}

template<class T>
T& Deque<T>:: operator[] (const int &sub)
{
    if(sub < 0 || sub >= size)
        return dummy;
    Node<T> *current = head;
    int count = 0;
    while(current != NULL)
    {
        if(count == sub)
            return(current->data);
        count++;
        current = current->next;
    }
    assert(0);
}

template <class T>
Deque<T>& Deque<T>:: operator= ( Deque<T> & rhs )
{
    if(this != &rhs)
    {
        erase();
        head = nullptr;
        tail = nullptr;
        size = 0;
        copy = nullptr;
        deepCopy(rhs);
    }
    return *this;
}

template <class T>
Deque<T>& Deque<T>:: operator= ( Deque<T> && rhs )
{
    if(this != &rhs)
    {
        erase();
        head = nullptr;
        tail = nullptr;
        copy = nullptr;
        head = rhs.head;
        tail = rhs.tail;
        copy = rhs.copy;
        size = rhs.size;
        rhs.head = nullptr;
        rhs.tail = nullptr;
        rhs.copy = nullptr;
        rhs.size = 0;
    }
    return *this;
}

template<class T>
void Deque<T>::deepCopy( const Deque<T> & rhs ) {
    Node<T> *newNode = new Node<T>;
    Node<T> *current = rhs.head; //current points to the list to be copied
    size = rhs.size;//copy the head node
    copy = newNode; //create the node
    copy->data = current->data; //copy the info
    copy->next = current->next; //set the link field of the node to nullptr
    copy->prev = current->prev;
    head = copy; //make tail point to the head node
    tail = head;
    current = current->next; //make current point to the next node
    //copy the remaining list
    while (current != nullptr) {
        newNode = new Node<T>; //create a node
        newNode->data = current->data; //copy the info
        newNode->next = current->next;
        newNode->prev = current->prev;
        tail->next = newNode;
        tail = newNode;
        current = current->next;
    }
}
// complete the rest of definitions below

template<class T>
void Deque<T>::erase()
{
    tail = NULL;
    while (head != NULL)
    {
        Node<T>* temp = head;
        head = head->next;
        free(temp);
    }
    size = 0;
}

template<class T>
void Deque<T>:: pushHead(T data)
{
    Node<T> *newNode = Node<T>::getnode(data);
    if(head == nullptr)
        head = tail = newNode;
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}


template<class T>
void Deque<T>:: pushTail(T data)
{
    Node<T> *newNode = Node<T>::getnode(data);
    if (newNode == NULL)
          cout << "OverFlow\n";
      else
      {
          if (tail == NULL)
              head = tail = newNode;
              else
          {
              newNode->prev = tail;
              tail->next = newNode;
              tail = newNode;
          }
    
          size++;
      }
}

template<class T>
void Deque<T>:: popHead()
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        Node<T> *temp = head;
        head = head->next;
        if(head == NULL)
            tail=nullptr;
        else
            head->prev = NULL;
        free(temp);
        
        size--;
    }
}

template<class T>
void Deque<T>:: popTail()

{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        Node<T> *temp = tail;
        tail = tail->prev;
        
        if(tail == NULL)
            head = nullptr;
        else
            tail->next = NULL;
        free(temp);
        
        size--;
    }
}

template<class T>
T Deque<T>:: getFront()
{
    if(isEmpty())
        return dummy;
    return head->data;
}

template<class T>
T Deque<T>:: getRear()
{
    if(isEmpty())
        return dummy;
    return tail->data;
}

#endif /* Deque_h */
