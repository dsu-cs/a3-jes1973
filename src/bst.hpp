#pragma once

// include this library to use NULL, otherwise use nullptr instead
#include <cstddef>
#include <iostream>
#include <vector>
#include "node.hpp"

template<class T>
class BST{
public:
    // Constructor for the BST class, creates an empty tree
    BST(void);
    // Destructor for the BST class, destroys the tree
    ~BST(void);
    // Inserts data into the tree
    // param: The data to be inserted into the tree
    void insert(T);
    // Removes data from the tree
    // param: The data to be removed from the tree
    void remove(T);
    // Performs an inorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *inorder(void);
    // Performs an postorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *postorder(void);
    // Performs an preorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *preorder(void);
    // Searches the tree for a given value
    // param: the data to search for
    // returns: a pointer to the node containing the data or NULL if the data
    //          was not found
    Node<T> *search(T);
    // Gets the current number of nodes in the tree
    // returns: the number of nodes in the tree
    int get_size(void);
private:
    // the root node of the tree
    Node<T> *root;
    // the number of nodes in the tree
    int node_count;
};

// bst constructor
template<class T>
BST<T>::BST()
{
    root = NULL;
    node_count = 0;
}// end bst constructor

// bst destructor
template<class T>
BST<T>::~BST()
{
    root = NULL;
    while(root != NULL)
    {
        remove(root->get_data());
    }
}// end bst destructor

template<class T>
void BST<T>::insert(T new_data)
{
    Node<T> *nodeToInsert = new Node<T>(new_data);
    if(root == NULL)
    {
        root = nodeToInsert; 
        node_count++;
    }// end if create root
    if(new_data < root->get_data())
    {
        if(root->get_left() != NULL)
        {
            insert(root->set_left(nodeToInsert));
        }
        else
        {
            root->set_left(nodeToInsert);
            node_count++;
        }
    }
    else if(new_data > root->get_data())
    {
        if(root->get_right() != NULL)
        {
            insert(root->set_right(nodeToInsert));
        }
        else
        {
            root->set_right(nodeToInsert);
            node_count++;
        }
    }
}// end insert function

template<class T>
 std::vector<T> * BST<T>::inorder()
{
    std::vector<T> *vec = new std::vector<T>;
    int index = 0;
   
   /*
    if(index < vec.size())
    {
        inorder(2*index);   // recurse to left subtree
        cout << " " << vec[index]
        inorder(2*index+1)  // recurse to ri9ght subtree
        return vec;
    }// end inorder function
*/
    return vec;
}



template<class T>
 std::vector<T> * BST<T>::preorder()
{
    std::vector<T> *vec = new std::vector<T>;

/*
 if(index < SIZE)
        {
            cout << " " << tree[index];
            preorder(2*index);   // recurse to the left sub tree
            preorder(2*index + 1);   // recurse to the right sub tree
        }// end if
*/


    return vec;
}



template<class T>
 std::vector<T> * BST<T>::postorder()
{
    std::vector<T> *vec = new std::vector<T>;

/*
if(index < SIZE)
        {
            postorder(2*index);   // recurse to the left sub tree
            postorder(2*index + 1);   // recurse to the right sub tree
            cout << " " << tree[index];
        }// end if
*/

    return vec;
}


template<class T>
Node<T> *BST<T>::search(T val)
{
    return 0;
}



template<class T>
void BST<T>::remove(T val)
{

}


template<class T>
int BST<T>::get_size()
{

    return 0;
}