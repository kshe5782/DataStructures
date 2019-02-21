//
//  DoubleNode.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 2/21/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

template <class Type>
class DoubleNode : public Node<Type>
{
protected:
DoubleNode <Type> * previous;
DoubleNode <Type> * next;

public:
DoubleNode();
DoubleNode(Type data);
DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type * next);

DoubleNode<Type> * getPrevious();
DoubleNode<Type> * getNext();

void setPrevious(DoubleNode<Type> * previous);
void setNext(DoubleNode<Type> * next);
}

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
void DoubleNode<Type> :: setPrevious(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setPrevious(Double<Type>* previous)
{
    this->previous = previous;
}

template <clas Type>
DoubleNode<Type> * DoubleNode<Type :: getPrevious()
{
    return previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

#endif /* DoubleNode_hpp */
