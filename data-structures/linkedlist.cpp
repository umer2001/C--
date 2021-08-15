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
    cout << endl;
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

void adddNodeAt(int data, int index, Node *n)
{

    Node *newNode = NULL;
    newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (index == 0)
    {
        int tmp = n->data;
        newNode->next = n->next;
        *n = *newNode;
        adddNodeAt(tmp, 1, n);
    }
    else
    {
        int count = 0;

        Node *pNode;
        pNode = n;
        while (n->next != NULL)
        {
            if (count == index)
            {
                newNode->next = pNode->next;
                pNode->next = newNode;
            }
            pNode = n;
            n = n->next;
            count++;
        }
    }
}

void popBack(Node *n)
{
    if (n->next == NULL)
    {
        cout << "here" << endl;
        n = NULL;
    }
    else
    {
        Node *pNode;
        pNode = n;
        while (n->next != NULL)
        {
            pNode = n;
            n = n->next;
        }
        pNode->next = NULL;
    }
}

Node *findInList(int data, Node *n)
{
    while (n != NULL)
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

    popBack(head);

    displayList(head);

    adddNodeAt(15, 0, head);

    displayList(head);

    // Test cases
    cout << "3 is at : " << findInList(3, head) << endl;
    cout << "5 is at : " << findInList(5, head);
}
