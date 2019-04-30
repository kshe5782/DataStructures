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


#endif /* AVLTree_h */
