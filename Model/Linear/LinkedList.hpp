//
//  Header.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 2/7/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
    
public:
    LinkedList();
    
    virtual ~LinkedList();
    
    int getSize
    
}


template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool exists = false;
    
    LinearNode<Type> * searchPointer = front;
    
    for (int index = 0; index < getSize(); index++)
    {
        if(searchPointer->getData() == thingToFind)
        {
            return true;
        }
        searchPointer = searchPointer->getNextNode();
    }
    
    return exists;
};
#endif /* Header_hpp */
