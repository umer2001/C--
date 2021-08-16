#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

#define COUNT 10

/*
Full binary tree => each node has either 0 or 2 childern.
Complete binary tree => all level are completely filled & last level should be filled from as left as possible.
Perfect binary tree => all nodes are filled making a triangle.
*/

/*----------------------------------Struct Declarations------------------------------------*/
struct Node
{
    int data;
    Node *left, *right;
};

/*----------------------------------Function Definations------------------------------------*/
void displayTree(Node *n)
{
    if (n != NULL)
    {
        cout << n->data << " ";
        displayTree(n->left);
        displayTree(n->right);
    }
}

void displayTreeInOrder(Node *n)
{
    if (n != NULL)
    {
        displayTreeInOrder(n->left);
        cout << n->data << " ";
        displayTreeInOrder(n->right);
    }
}

void displayTreePreOrder(Node *n)
{
    if (n != NULL)
    {
        cout << n->data << " ";
        displayTreePreOrder(n->left);
        displayTreePreOrder(n->right);
    }
}

void displayTreePostOrder(Node *n)
{
    if (n != NULL)
    {
        displayTreePostOrder(n->left);
        displayTreePostOrder(n->right);
        cout << n->data << " ";
    }
}

void adddNode(int data, Node *n)
{

    Node *newNode = NULL;
    newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if (!n->left)
    {
        n->left = newNode;
    }
    else if (!n->right)
    {
        n->right = newNode;
    }
    else
    {
        adddNode(data, n->left);
    }
}

int treeSize(Node *n)
{
    if (n != NULL)
    {
        return 1 + treeSize(n->left) + treeSize(n->right);
    }
    else
    {

        return 0;
    }
}

void cleartree(Node *n)
{
    if (n != NULL)
    {
        cleartree(n->left);
        cleartree(n->right);
        n->left = NULL;
        n->right = NULL;
    }
}

void print2DUtil(Node *root, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(Node *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}

int main()
{
    Node *head = NULL;

    head = new Node();

    head->data = 1;

    adddNode(2, head);

    adddNode(3, head);

    adddNode(4, head);
    adddNode(5, head);

    print2D(head);

    cout << "InOrder : ";
    displayTreeInOrder(head);

    cout << "\nPreOrder : ";
    displayTreePreOrder(head);

    cout << "\nPostOrder : ";
    displayTreePostOrder(head);

    cout << "\nTree size : "
         << treeSize(head) << endl;

    cout << "\nCleared the tree ";
    cleartree(head);

    cout << "\nTree size : "
         << treeSize(head) << endl;
}
