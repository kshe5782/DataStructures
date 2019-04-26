//
//  LinearNode.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 1/30/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp
#include "Node.hpp"

template <class Type>
class linearNode : public Node<Type>

{
private:
    LinearNode<Type> * next;
    
public:
    linearNode();
    linearNode (Type data);
    linearNode(Type data, linearNode<Type> * next);
    linearNode<Type> * getNextNode();
    void setNextNode (linearNode<Type> * next);
};

template <class Type>
linearNode<Type> :: linearNode() : Node()
{}

template <class Type>
linearNode<Type> :: LinearNodeType data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type> linearNode<Type> :: linearNode(Type data, linearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
linearNode<Type> * linearNode<Type> :: getNextNode()
{
    return this->next;
}

template <class Type>
void linearNode<Type> :: setNextNode(linearNode<Type> * next)
{
    this->next = next;
}



#endif /* LinearNode_h */
