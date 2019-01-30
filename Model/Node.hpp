//
//  Node.hpp
//  DataStructures
//
//  Created by Shepherd, Kayden on 1/28/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <assert.h>

template <class Type>
class Node
{
private:
    Type Data;
public:
    Node(Type data);
    type getData();
    void setData(Type data);
};
//Template definitions

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class type>
Node<Type> :: Node ()
{}


template <class Type>
Type Node<Type> :: setData(Type data)
{
    retun data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

#endif /* Node_h */
