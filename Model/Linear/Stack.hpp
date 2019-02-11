//
//  Stack.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 2/11/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    void push(Type data);
    Type pop();
    Type peek();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    //empty
}


#endif /* Stack_hpp */
