#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


int getMiddle(Node *head)
{
    Node *p1 = head; 
    Node *p2 = head; 

    
    while (p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;       
        p2 = p2->next->next; 
    }



    return p1->data;
}

int main()
{
    // example :
    //  Create a sample linked list: 3 -> 2 -> 4 -> 9 -> 11 -> 16
    // Here the N = 6 (even) so the second middle element would be 9
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(9);
    head->next->next->next->next = new Node(11);
    head->next->next->next->next->next = new Node(16);

    // Find the middle element
    int middle = getMiddle(head);
    cout << "middle element of the linked list is : " << middle << endl;

    return 0;
}