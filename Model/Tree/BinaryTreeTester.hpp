//
//  BinaryTreeTester.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 4/16/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Tree/BinaryTreeNode.hpp"
#include "../Model/Tree/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinaryTreeNode<int> testTree;
public:
    void treeStuff();
}

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4380);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();

};

#endif /* BinaryTreeTester_hpp */
