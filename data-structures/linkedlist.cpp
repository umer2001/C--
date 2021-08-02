#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

/*----------------------------------Function Declaration------------------------------------*/
void displayArray(int *);
void bubblesort(int *, int);
void displayList(node *);
node addNode(int, node *);
/*----------------------------------Function Definations------------------------------------*/
void displayList(node *base)
{
    node *tmp = base;
    cout << "\n";
    while (tmp->next != NULL)
    {
        cout << tmp->data << "\t";
        tmp = tmp->next;
    }
}

node addNode(int data, node *baseNode)
{
    node newNode;
    newNode.data = data;
    newNode.next = NULL;
    if (baseNode->next == NULL)
    {
        baseNode->next = &newNode;
    }
    else
    {
        // cout << "data : " << data << endl;
        node *tmp = baseNode;
        cout << "address before : " << tmp->next << endl;
        while (tmp->next != NULL)
        {
            cout << "address : " << tmp->next << endl;
            cout << "data : " << tmp->data << endl;
            tmp = tmp->next;
        }
        cout << "address after: " << tmp->next << endl;
        cout << "after data : " << tmp->data << endl;
        tmp->next = &newNode;
    }
    return newNode;
}

int main()
{
    node *baseAddr;

    node base;
    base.data = 5;
    base.next = NULL;
    baseAddr = &base;

    addNode(10, baseAddr);
    addNode(41, baseAddr);
    // displayList(baseAddr);
}

// 20 steps
//reduced 10 steps by adding sorted count  10 steps