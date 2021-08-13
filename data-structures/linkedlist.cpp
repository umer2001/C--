#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------Struct Declarations------------------------------------*/
struct Node
{
    int data;
    Node *next;
};

/*----------------------------------Function Definations------------------------------------*/
void displayList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void adddNode(int data, Node *n)
{
    Node *newNode = NULL;
    newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    while (n->next != NULL)
    {
        n = n->next;
    }
    n->next = newNode;
}

Node *findInList(int data, Node *n)
{
    while (n->next != NULL)
    {
        if (n->data == data)
        {
            return n;
        }
        n = n->next;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;

    head = new Node();

    head->data = 1;

    adddNode(2, head);

    adddNode(3, head);

    adddNode(4, head);

    displayList(head);

    // Test cases
    cout << "3 is at : " << findInList(3, head);
    cout << "5 is at : " << findInList(5, head);
}
