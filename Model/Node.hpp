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



#endif /* Node_h */
