//
//  BinarySearchTree.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 4/16/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

//#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void isOrederTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode (BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
}

template <class Type>
int BinaryTreeNode<Type> :: getSize()
{
    return -1
}

template <class Type>
bool BinaryTreeNode<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinaryTreeNode<Type> :: isBalanced()
{
    return false;
}

template <class Type>
void BinaryTreeNode<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: insert(Type item)
{
}

template <class Type>
bool BinaryTreeNode<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinaryTreeNode<Type> :: remove(Type item)
{
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = newBinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    }
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftChild();
            }
            else if (itemToInsert > current->getData())
            {
                current = current->getRightChild()
            }
            cerr << "Item already exists - Exiting insert" << endl;
            delete insertMe;
            return;
            }
        }
            if (previous->getData() > itemToInsert)
            {
                previous->setLeftChild(insertMe);
            }
            else
            {
                previous->setRightChild(insertMe);
            }
            insertMe->setRootNode(previous);
            }
        }
            
          template <class Type>
            void BinarySearchTree<Type> :: inOrderTraversal()
            {
                inOrderTraversal(this->root);
            }
            
            template <class Type>
            void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
            {
                if(currentNode != nullptr)
                {
                    inOrderTraversal(currentNode->getLeftChild());
                    cout << currentNode->getData() << endl;
                    inOrderTraversal(currentNode->getRightChild());
                }
            }
        
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
            {
                preOrderTraversal(this->root);
            }
            
            template <class Type>
            void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
            {
                if(currentNode != nullptr)
                {
                    cout << curentNode->getData() << endl;
                    preOrderTraversal(currentNode->getLeftChild());
                    preOrderTraversal(currentNode->getRightChild());
                }
            }

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
    {
        postOrderTraversal(this->root);
    }
            
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
            {
                if(currentNode != nullptr)
                {
                    postOrderTraversal(currentNode->getLeftChild());
                    postOrderTraversal(currentNode->getRightChild());
                    cout << currentNode->getData() << endl;
                }
            }
            
            
            
};


#endif /* BinarySearchTree_hpp */
