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
    Node<T>* insertHelper(int, Node<T>*);
    void inorderHelper(Node<T>*);
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

// insert function to call recursive helper function
template<class T>
void BST<T>::insert(T new_data)
{
    root = insertHelper(new_data, root);
}// end insert function

// insertHelper function to conduct the recursive insertion
template<class T>
Node<T>* BST<T>::insertHelper(int data, Node<T>* currNode)
{
    // if tree is empty- create a new node and return it
    if(currNode == NULL)
    {
        Node<T>* tmp = new Node<T>;
        tmp->set_data(data);
        tmp->set_left(NULL);
        tmp->set_right(NULL);
        return tmp;
    }// new node created and returned
    // if new data is less than currNode data move left
    else if(data < currNode->get_data())
        {
            currNode->set_left(insertHelper(data, currNode->get_left()));
        }// end left
        // if new data is greater than currNode data move right
        else
        {
            currNode->set_right(insertHelper(data, currNode->get_right()));
        }// end right
    return currNode;    // catch all other cases
}// end insertHelper function

// inorder function to call inorderHelper function for recursion
template<class T>
std::vector<T> * BST<T>::inorder()
{
    std::vector<T> *vec = new std::vector<T>;
    /*
    Node<T>* currNode = new Node<T>;
    currNode = root;
    while(currNode != NULL)
    {

    }
    */
    // xxxxx inorderHelper(root);
    return vec;
}// end of inorder function

// inorderHelper function to conduct the recursive ordering
template<class T>
void BST<T>::inorderHelper(Node<T>* currNode)
{
    if(currNode != NULL)
    {
        inorderHelper(currNode->get_left());
        //put data in vector
        inorderHelper(currNode->get_right());
    }

}// end of inorderHelper function


template<class T>
 std::vector<T> * BST<T>::preorder()
{
    std::vector<T> *vec = new std::vector<T>;


    return vec;
}



template<class T>
 std::vector<T> * BST<T>::postorder()
{
    std::vector<T> *vec = new std::vector<T>;


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
    return node_count;
}