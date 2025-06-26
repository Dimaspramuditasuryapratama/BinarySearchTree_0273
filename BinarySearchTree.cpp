#include <iostream>
using namespace std;

class Node {
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        info = 0;
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize root to null
    }

    void insert()
    {
        int x;
        cout << "Masukan nilai: ";
        cin >> x;

        // step 1: Allocate memory for a new node
        Node *newNode = new Node();

        // step 2: Assign value to the data field of the new node
        newNode->info = x;


 


    }

  
  


  

 
};
