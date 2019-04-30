//
//  AVLTree.h
//  DataStructures
//
//  Created by Shepherd, Kayden on 4/30/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinarySearchTree<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinarySearchTree<Type> * rightRotation(BianryTreeNode<Type> * parent);
    BinarySearchTree<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinarySearchTree<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinarySearchTree<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinarySearchTree<Type> * insertNode(BinaryTreeNode<Type> *  parent, Type value);
    BinarySearchTree<Type> * removeNode(BinaryTreeNode<Type> * parent, type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
    
};

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balnceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if (balanceFactor > 1)
    {
        if(HeightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
BinarySearchTree<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        this->setRoot(parent);
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balanceSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
    }
    return parent;
}

template <class Type>
BinaryTreeNode<Type> ** AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(inserted < parent->getNodeData())
    {
        parent->setleftChild(removeNode(parent->getLeftChild(), inserted));
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(removeNode(parent->getRightChild(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightChild() == nullptr)
        {
        else
        {
            BinaryTreeNOde<Type> * leftMost = this->getLeftMostChild(parent->getRightChild());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightChild(), inserted));
        }
        }
        if(parent == nullptr)
        {
            return parent;
        }
        return balanceSubTree(parent);
    }
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type, item)
{
    removeNode(this->getRoot(), item);
}

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

#endif /* AVLTree_h */
